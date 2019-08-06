#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

////1.在屏幕上输出以下图案(打印出菱形）：
int main()
{
	int i = 0;//空格
	int j = 0;//*
	int n = 0;//行

	//打印前7行
	for (n = 1; n <= 7; n++)
	{
		for (i = 1; i <= (7 - n); i++)
			printf(" ");
		for (j = 1; j <= (2*n - 1); j++)
			printf("*");
		printf("\n");
	}

	//打印后6行
	for (n = 6; n >= 1; n--)
	{
		for (i = 1;i<=(7-n);i++)
			printf(" ");
		for (j = 1; j <= (2 * n - 1); j++)
			printf("*");
		printf("\n");
	}

	system("pause");
	return 0;
}
