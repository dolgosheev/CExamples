@echo off
set progname=code_01
gcc %progname%.c -o %progname%.exe
call %progname%.exe
pause >nul