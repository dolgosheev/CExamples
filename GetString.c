#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

main(void)
{
	system("chcp 1251");
	setlocale(LC_ALL, "Russian_Russia.1251");

	char buf[256] = "";

	printf("Введите строку: ");
	fflush(stdout);
	fflush(stdin);

	char* p = fgets(buf, 256, stdin);

	if (p)
	{
		//delete \r
		size_t len = strlen(buf);
		if (len != 0 && buf[len - 1] == '\n')
		{
			buf[len - 1] = '\0';
		}

		// print result
		printf("Вы ввели строку %s\n", buf);
	}
	else
		puts("Возникла ошибка");
	
	return 0;
}