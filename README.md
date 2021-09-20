# FRIDA_GADGET_2_APK_ONE_SCRIPT
编译、注入FRIDA-GADGET、反编译、密钥库生成、签名一站式脚本，拒绝频繁操作，拒绝纷杂的网络资料

#### 1.1 介绍

```
1. 使用基础的FRIDA已经被移动端常见的APP给识别监听与扼杀
2. 关于APK编译、反编译、签名、密钥库生成网上资料很多很杂，难辩别真伪，本人也是屡次入坑
3. 目前关于FRIDA-GADGET的教程比较少，且官网的介绍也让我似懂非懂。
4. 本人对JAVA、SMALI语言的掌握不是很好，故着手于Python-Frida
```

#### 1.2 项目功能

```
1. 支持对APK的反编译
2. 支持自定义修改注入文件名称，以及自定义注入APK反编译后动态库(LIBRARY)库的所有架构下的指定SO文件
3. 支持生成密钥库
4. 支持对APK的编译
4. 支持对APK的签名
```

#### 1.3 使用说明

```
1. 下载FRIDA_GADGET_INJECTOR_V0.1.0_BETA_1.exe [或克隆，项目的release目录下亦存在其]
2. 以项目源码中的demo为例，克隆后，需将FRIDA_GADGET_INJECTOR_V0.1.0_BETA_1.exe移至demo目录下后打开运行，然后按照界面提示进行一站式注入
3. 可替换如demo/gadget目录下的所有文件成你需要按照的gadget版本
4. 注意：exe文件必须与auto.bat在同级目录下，保持并列
```

#### 1.4 技术
```
1. Batch Script
2. JavaScript
3. Python [lief]
4. Apktool[编译与反编译]、keytool[密钥库生成]、apksigner[签名，较好于jarsigner]
5. C++ Qt  图形化
```
#### 1.6 结尾
[简书](https://www.jianshu.com/u/98bc7a4fe9fd) 、[CSDN](https://blog.csdn.net/haiw2) 、[博客园](https://www.cnblogs.com/haiw2/)、[Greasy Fork](https://greasyfork.org/zh-CN/users/812860-haiw2)、[Github](https://github.com/haiw2)、[Gitee](https://gitee.com/haiw2)
                 个人其他社交主页，不定期更新学习中获得的技能与实践经验，欢迎志同道合的伙伴一起学习成长
