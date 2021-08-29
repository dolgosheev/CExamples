#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	int x = 0, y = 0, flag = 0, count = 1;

	printf("================================\n== Сумма двух введенных чисел ==\n================================\n");
	
	do
	{
		printf("Введите первое число: ");
		fflush(stdin);
		fflush(stdout);

		if (scanf("%d", &x) != 1)
		{
			puts("Это не число!");

			/* error processing */
			if (feof(stdin) || ferror(stdin))  clearerr(stdin);

			int ch = 0;
			while ((ch = getchar()) != '\n' && ch != EOF)
			{
				++count;
			}

			if (count > 3)
			{
				puts("Вы сделали больше 3 попыток ввода...");
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
		printf("Введите второе число: ");
		fflush(stdin);
		fflush(stdout);

		if (scanf("%d", &y) != 1)
		{
			puts("Это не число!");

			/* error processing */
			if (feof(stdin) || ferror(stdin))  clearerr(stdin);

			int ch = 0;
			while ((ch = getchar()) != '\n' && ch != EOF)
			{
				++count;
			}

			if (count > 3)
			{
				puts("Вы сделали больше 3 попыток ввода...");
				return 1;
			}
		}
		else flag = 1;
	} 	while (!flag);

	printf("Сумма чисел равна: %d\n", x + y);

	printf("До свидания!");
	fflush(stdin);
	getchar();
	return 0;
}