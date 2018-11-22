@ECHO OFF
REM Gerado pela xDev Studio v0.72 as 16/11/2018 @ 12:53:11
REM Compilador .: xHB build 1.2.3 (SimpLex) & BCC 7.00 & FW 17.09
REM Destino ....: C:\Des\build\Exercicios\cliente.EXE
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=C:\Des\build\bcc17\bin;C:\Des\build\fwh17;C:\Des\build\xhb17\bin;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Users\Suporte Adriano\AppData\Local\Microsoft\WindowsApps;
 SET INCLUDE=C:\Des\build\bcc17\include;C:\Des\build\fwh17\include;C:\Des\build\xhb17\include;;
 SET LIB=C:\Des\build\bcc17\lib;C:\Des\build\bcc17\lib\psdk;C:\Des\build\fwh17\lib;C:\Des\build\xhb17\lib;;

REM - FiveWin.xCompiler.prg(78) @ 12:53:11:497
ECHO .ÿ
ECHO * (1/3) Compilando cliente.prg
 harbour.exe ".\cliente.prg" /o".\cliente.c"   /M  /N /q 
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(113) @ 12:53:12:036
 echo -I"C:\Des\build\bcc17\include;C:\Des\build\fwh17\include;C:\Des\build\xhb17\include;;" > "b32.bc"
 echo -L"C:\Des\build\bcc17\lib;C:\Des\build\bcc17\lib\psdk;C:\Des\build\fwh17\lib;C:\Des\build\xhb17\lib;;;;;" >> "b32.bc"
 echo -o".\cliente.obj" >> "b32.bc"
 echo ".\cliente.c" >> "b32.bc"

REM - FiveWin.xCompiler.prg(114) @ 12:53:12:036
ECHO .ÿ
ECHO * (2/3) Compilando cliente.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(249) @ 12:53:12:669
 echo -I"C:\Des\build\bcc17\include;C:\Des\build\fwh17\include;C:\Des\build\xhb17\include;;" + > "b32.bc"
 echo -L"C:\Des\build\bcc17\lib;C:\Des\build\bcc17\lib\psdk;C:\Des\build\fwh17\lib;C:\Des\build\xhb17\lib;;;;;" + >> "b32.bc"
 echo -aa + >> "b32.bc"
 echo -Gn -Tpe -s + >> "b32.bc"
 echo c0w32.obj +     >> "b32.bc"
 echo ".\cliente.obj", +  >> "b32.bc"
 echo ".\cliente.EXE", +    >> "b32.bc"
 echo ".\cliente.map", +    >> "b32.bc"
 echo FiveHx.lib FiveHC.lib + >> "b32.bc"
 echo rtl.lib +       >> "b32.bc"
 echo vm.lib +        >> "b32.bc"
 echo gtgui.lib  +  >> "b32.bc"
 echo lang.lib +      >> "b32.bc"
 echo macro.lib +     >> "b32.bc"
 echo rdd.lib +       >> "b32.bc"
 echo codepage.lib +  >> "b32.bc"
 echo dbfntx.lib +    >> "b32.bc"
 echo dbffpt.lib +    >> "b32.bc"
 echo hbsix.lib    +  >> "b32.bc"
 echo common.lib +    >> "b32.bc"
 echo pp.lib +        >> "b32.bc"
 echo ct.lib +        >> "b32.bc"
 echo lang.lib +        >> "b32.bc"
 echo pcrepos.lib +        >> "b32.bc"
 echo png.lib +        >> "b32.bc"
 echo tip.lib +        >> "b32.bc"
 echo zlib.lib +        >> "b32.bc"
 echo hbzip.lib +        >> "b32.bc"
 echo cw32.lib +      >> "b32.bc"
 echo import32.lib +  >> "b32.bc"
 echo nddeapi.lib + >> "b32.bc"
 echo iphlpapi.lib + >> "b32.bc"
 echo rasapi32.lib + >> "b32.bc"
 echo shell32.lib + >> "b32.bc"
 echo , >> "b32.bc"
 echo ".\cliente.res"  >> "b32.bc"

REM - FiveWin.xCompiler.prg(250) @ 12:53:12:669
ECHO .ÿ
ECHO * (3/3) Linkando cliente.EXE
 ILINK32 @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
