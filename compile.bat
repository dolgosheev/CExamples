@echo off
chcp 1251
set progname=IntSumm
gcc %progname%.c -o %progname%.exe
call %progname%.exe
pause >nul