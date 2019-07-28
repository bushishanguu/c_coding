#define _CRT_SECURE_NO_WARNINGS 1


#include "stdio.h"
#include "stdlib.h"




//判断1000到2000之间的闰年
int main()
{

	int year;
	for (year = 1000; year <= 2000; year++)
	{

		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

			printf("%d是闰年\n", year);
	}


	system("pause");
	return 0;
}

