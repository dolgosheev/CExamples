#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	int x = 0, y = 0, flag = 0, count = 1;

	printf("================================\n== ����� ���� ��������� ����� ==\n================================\n");
	
	do
	{
		printf("������� ������ �����: ");
		fflush(stdin);
		fflush(stdout);

		if (scanf("%d", &x) != 1)
		{
			puts("��� �� �����!");

			/* error processing */
			if (feof(stdin) || ferror(stdin))  clearerr(stdin);

			int ch = 0;
			while ((ch = getchar()) != '\n' && ch != EOF)
			{
				++count;
			}

			if (count > 3)
			{
				puts("�� ������� ������ 3 ������� �����...");
				return 1;
			}
		}
		else flag = 1;
	}
	while (!flag);

	flag = 0;
	count = 1;

	do
	{
		printf("������� ������ �����: ");
		fflush(stdin);
		fflush(stdout);

		if (scanf("%d", &y) != 1)
		{
			puts("��� �� �����!");

			/* error processing */
			if (feof(stdin) || ferror(stdin))  clearerr(stdin);

			int ch = 0;
			while ((ch = getchar()) != '\n' && ch != EOF)
			{
				++count;
			}

			if (count > 3)
			{
				puts("�� ������� ������ 3 ������� �����...");
				return 1;
			}
		}
		else flag = 1;
	} 	while (!flag);

	printf("����� ����� �����: %d\n", x + y);

	printf("�� ��������!");
	fflush(stdin);
	getchar();
	return 0;
}