#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <Windows.h>

main(int args, const char* argv[])
{
	printf("Loading... 0%%");
	for (int i = 1; i<=100 ; i ++)
	{
		Sleep(10);
		printf("\rLoading... %d%%",i);
		fflush(stdout);
	}

	puts("\nLoading complete...\nSet encoding...");
	system("chcp 1251");
	setlocale(LC_ALL, "Russian_Russia.1251");

	char str[256] = "";
	int x = 0;

	printf("������� ������: ");
	fflush(stdout);
	fflush(stdin);

	int status = scanf("%255s", str);
	if(status == 1)
	{
		printf("�� �����: %s\n", str);
	}
	else
	{
		puts("������ ��� ����� ������");
	}
	
	printf("������� �����: ");
	fflush(stdout);
	fflush(stdin);

	int status2 = scanf("%d", &x);
	if (status2 == 1)
	{
		printf("�� �����: %d\n", x);
	}
	else
	{
		puts("������ ��� ����� �����");
	}

	
	printf("�� ��������!");
	fflush(stdin);
	getchar();
	return 0;
}
