import os
import lief
from shutil import rmtree as shutil_rmtree, copy as shutil_copy, move as shutil_move
from re import search as re_search
from argparse import ArgumentParser

# 当前脚本路径
CURRENT_SCRIPT_ABSOLUTE_PATH = os.getcwd()
# ANDROID-GADGET REFERENCE TABLE
SUFFIX_INFLECT_TABLE = {'arm64':'arm64-v8a','arm':'armeabi-v7a','x86':'x86','x86_64':'x86_64'}
# 根据选择注入方式，修改此变量内容
GADGET_CONFIG_FILE_CONTENT = '''{
	"interaction": 
	{
		"type": "script",
		"path": "/data/local/tmp/douban.js"
	}
}
'''



# 手动配置 [必须以运行脚本所在路径下] [已通过auto.bat输入参数代替]
# 接受输入
# 下载的所有GADGET文件的文件夹名称 [必填]
GADGET_DIRECTORY_NAME = 'gadget' 
# 解压后的ANDROID的文件夹名称 [必填]
APK_UNPACK_DIRECTORY_NAME = ''
# GADGET CONFIG FILE (ONLY ONE)
# 所有GADGET文件的新名字，用以注入响应ANDROID架构的so包中
GADGET_FILE_NEW_NAME = ''
# 注入的SO文件名
SO_FILE_NAME = ''


# 同GADGET FILE NEW NAME
GADGET_CONFIG_FILE_NAME = ''


# 新命名: 当前文件夹下所有GADGET文件都是以当前文件夹名字注入
def rename_all_gadget_file_name():
	p = os.path.join(CURRENT_SCRIPT_ABSOLUTE_PATH, GADGET_FILE_NEW_NAME)
	try:
		os.mkdir(p, mode=0o777)
	except FileExistsError as fee:
		print(GADGET_FILE_NEW_NAME + ' directory already exist')
		del_flag = input('[*] Allow me delete %s directory? [y/n]\t'%GADGET_FILE_NEW_NAME)
		if del_flag=='y':
			shutil_rmtree(p)
			os.mkdir(p, mode=0o777)
		else: 
			return
	fileNames = os.listdir(GADGET_DIRECTORY_NAME)
	for name in fileNames:
		f = lambda x: os.path.join(CURRENT_SCRIPT_ABSOLUTE_PATH, GADGET_DIRECTORY_NAME, x)
		newName = re_search('[^-]*$', name).group(0)
		pp,npp = map(f, [name, SUFFIX_INFLECT_TABLE[newName[:-3]]+'.so'])
		npp = npp.replace(GADGET_DIRECTORY_NAME,GADGET_FILE_NEW_NAME)
		shutil_copy(pp, npp)
		print('[*] {0:<64s} => {1:<50s} {2:>}'.format(pp,npp,'DONE!'))

class Inject():
	"""docstring for Inject"""
	def __init__(self):
		super(Inject, self).__init__()
		self.p = os.path.join(CURRENT_SCRIPT_ABSOLUTE_PATH, APK_UNPACK_DIRECTORY_NAME, 'lib')

	def inject_gadget_file_2_so(self):
		libs = os.listdir(self.p)
		for lib in libs:
			so = os.path.join(self.p,lib, SO_FILE_NAME)
			try:
				libnative = lief.parse(so)
				libnative.add_library(GADGET_FILE_NEW_NAME+'.so')
				libnative.write(so)
			except Exception as e:
				raise e
			finally:
				print('\t[{0:^15}]\tInject {0}/{1}.so 2 {0}/{2} finished.'.format(lib, GADGET_FILE_NEW_NAME,SO_FILE_NAME))
				pp = os.path.join(CURRENT_SCRIPT_ABSOLUTE_PATH, GADGET_FILE_NEW_NAME)
				self.move_gadget_2_so_dir(pp,lib)
				self.move_gadget_config_2_so_dir(lib)


	def move_gadget_2_so_dir(self, pp,lib):
		shutil_copy(os.path.join(pp,lib+'.so'), os.path.join(self.p,lib))
		os.rename(os.path.join(self.p,lib,lib+'.so'), os.path.join(self.p,lib,GADGET_FILE_NEW_NAME+'.so'))
		print('\t[{0:^15}]\tMoving the {0}/{1}.so finished.'.format(lib, GADGET_FILE_NEW_NAME))



	def move_gadget_config_2_so_dir(self, lib):
		shutil_copy(os.path.join(CURRENT_SCRIPT_ABSOLUTE_PATH,GADGET_CONFIG_FILE_NAME), os.path.join(self.p, lib))
		print('\t[{0:^15}]\tMoving the {1} finished.'.format(lib,GADGET_CONFIG_FILE_NAME))


if __name__ == '__main__':
	parser = ArgumentParser(description='功能： FRIDA-GADGET 自定义注入脚本 [以下参数均不需要添加后缀]', add_help='展示帮助信息和退出')
	parser.add_argument('-a',required=True,dest='APK_NAME', help='APK 解压后的文件夹名称 (必选)')
	parser.add_argument('-s',required=True,dest='SOF_NAME', help='选择需要注入的SO文件名[默认注入所有架构] (必选)')
	parser.add_argument('-g',required=True,dest='GADGET_DIR_NAME', help='存放所有FRIDA-GADGET文件的目录名 (必选)')
	parser.add_argument('--n',dest='GADGET_NEW_NAME',default='libhaiw2gt',help='所有FRIDA-GADGET文件的新名字 (默认: %(default)s)')
	
	args = parser.parse_args()

	f = lambda x: x if x.find('.so')==-1 else x[:-3]
	# 处理APK的后缀问题
	if(args.APK_NAME.find('.apk')!=-1):
		APK_NAME = args.APK_NAME[:-3]
	else:
		APK_NAME = args.APK_NAME
	# 处理SO文件的后缀问题, 统一为无后缀
	GADGET_FILE_NEW_NAME, SO_FILE_NAME = map(f, [args.GADGET_NEW_NAME, args.SOF_NAME])
	# 注入GADGET的配置文件
	GADGET_CONFIG_FILE_NAME = GADGET_FILE_NEW_NAME + '.config.so'
	SO_FILE_NAME = SO_FILE_NAME + '.so'
	
	GADGET_DIRECTORY_NAME = args.GADGET_DIR_NAME
	APK_UNPACK_DIRECTORY_NAME = APK_NAME
	
	print(APK_NAME, SO_FILE_NAME, GADGET_DIRECTORY_NAME, GADGET_FILE_NEW_NAME)

	with open(os.path.join(CURRENT_SCRIPT_ABSOLUTE_PATH, GADGET_CONFIG_FILE_NAME), 'w') as f:
		f.write(GADGET_CONFIG_FILE_CONTENT) 
	print('[*] Write the GADGET CONFIG FILE finished.')
	rename_all_gadget_file_name()
	print('[*] Rename work finished.')
	
	inject = Inject()
	inject.inject_gadget_file_2_so()
	print('[*] INJECT DONE!')

