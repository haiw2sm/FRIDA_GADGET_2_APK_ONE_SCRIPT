@echo off

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

IF [%APK_NAME%]==[] ( echo The agument 1 is required )
IF [%SOF_NAME%]==[] ( echo The agument 2 is required )
IF [%GADGET_DIR_NAME%]==[] ( echo The agument 3 is required )
IF [%GADGET_NEW_NAME%]==[] ( echo The agument 4 is empty. Will be set default 'libhaiw2gt')
 
del %FM%\1.apk 2>nul && echo [INFO] Apk has DELETED

echo.
echo [INFO] DECOMPILE.
java -jar tool\apktool.jar d -r -f %APK_NAME%.apk

echo.
echo [INFO] INJECT
python inject.py -g %GADGET_DIR_NAME% -ng %GADGET_NEW_NAME% -s %SOF_NAME% -a %APK_NAME%

echo.
echo [INFO] COMPILE
java -jar tool\apktool.jar b -f %APK_NAME% -o new.apk

echo.
echo [INFO] SIGNER
echo [INFO] Input the maked keystore'name and pass, Default its name is the same as alias: 
set /p KEY_NAME=keystore name :
set /p KEY_PASS=keystore pass :

echo [INFO] Follow Step To Make Signer Store
keytool -genkeypair -keystore %KEY_NAME%.keystore -alias %KEY_NAME% -keyalg RSA -validity 40000

echo [INFO] The maked keystore has finished.

echo [INFO] Signing...
tool\apksigner.bat sign -keystore %CD%\%KEY_NAME%.keystore -alias %KEY_NAME% -pswd %KEY_PASS% new.apk
echo.
echo [INFO] Signature has increased on new.apk
keytool -list -printcert -jarfile new.apk
echo.
echo ALL WORK DONE !