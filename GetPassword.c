#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(void)
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	char password[17] = "";
	int flag = 0, i = 0, ch = 0;

	printf("������� ������: ");
	fflush(stdout);

	do
	{
		ch = _getch();
		if(i >15 || ch =='\r' || ch =='\n')
		{
			flag = 1;
			password[i] = '\0';
		}
		else if( (ch > 47 && ch < 58) || // 0 - 9
				 (ch > 64 && ch < 91) || // A - Z
				 (ch > 96 && ch < 123) ) // a - z
		{
			password[i] = (char)ch;
			printf("%s", "*");
			fflush(stdout);
			++i;
		}
		else
		{
			puts("\n\n �� ����� ������������ ������!");
			return 0;
		}
			
	}
	while (!flag);

	printf("�� ����� ������ %s\n", password);

	printf("�� ��������!");
	fflush(stdin);
	getchar();
	return 0;
}