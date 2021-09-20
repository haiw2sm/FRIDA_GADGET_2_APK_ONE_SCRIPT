@echo off

color 2
echo #############  AUTO_COMPILE_INJECT_FRIDA-GADGET_DECOMPILE_SIGN   ###########
echo.
echo Usage: auto.bat [APK_NAME] [SOF_NAME] [GADGET_DIR_NAME] [GADGET_NEW_NAME]
echo Param:
echo      [1]        APK_NAME: The apk name
echo      [2]         SO_NAME: The target so file name needed injected
echo      [3] GADGET_DIR_NAME: The directory name stored the all gadget file
echo      [4] GADGET_NEW_NAME: The new file name of gadget file

set APK_NAME=%1
set SOF_NAME=%2
set GADGET_DIR_NAME=%3
set GADGET_NEW_NAME=%4

IF [%APK_NAME%]==[] (
	echo.
	color 4
	echo The agument 1 is required, Please Enter paramements according to above Usage!
	EXIT /B 1
)
IF [%SOF_NAME%]==[] (
	echo.
	color 4
	echo The agument 2 is required, Please Enter paramements according to above Usage!
	EXIT /B 2
)
IF [%GADGET_DIR_NAME%]==[] (
	echo.
	color 4
	echo The agument 3 is required, Please Enter paramements according to above Usage!
	EXIT /B 3
)
 
color 9
del %FM%\1.apk 2>nul && echo [INFO] Apk has DELETED

echo.
echo.
color 8
echo [INFO] DECOMPILE.
java -jar tool\apktool.jar d -r -f %APK_NAME%.apk

echo.
echo 6
echo [INFO] INJECT
IF [%GADGET_NEW_NAME%]==[] (
	echo.
	color 2
	echo The agument 4 is empty. Will be set default 'libhaiw2gt'
	python inject.py -a %APK_NAME% -s %SOF_NAME% -g %GADGET_DIR_NAME%  
) else (
	python inject.py -a %APK_NAME% -s %SOF_NAME% -g %GADGET_DIR_NAME% --n %GADGET_NEW_NAME%  
)

echo.
color 5
echo [INFO] COMPILE
java -jar tool\apktool.jar b -f %APK_NAME% -o new.apk

echo.
color 3
echo [INFO] SIGNER
echo [INFO] Input the maked keystore'name and pass, Default its name is the same as alias: 
set /p KEY_NAME=keystore name :
echo.
set /p KEY_PASS=keystore pass :

color 2
echo [INFO] Follow Step To Make Signer Store
keytool -genkeypair -keystore %KEY_NAME%.keystore -alias %KEY_NAME% -keyalg RSA -validity 40000

echo [INFO] The maked keystore has finished.

color 1
echo [INFO] Signing...
tool\apksigner.bat sign -keystore %CD%\%KEY_NAME%.keystore -alias %KEY_NAME% -pswd %KEY_PASS% new.apk
echo.

color 7
echo [INFO] Signature has increased on new.apk
keytool -list -printcert -jarfile new.apk
echo.

echo.
echo ALL WORK DONE !