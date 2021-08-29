@echo off
chcp 1251
set progname=GetString
gcc %progname%.c -o %progname%.exe
call %progname%.exe
pause >nul