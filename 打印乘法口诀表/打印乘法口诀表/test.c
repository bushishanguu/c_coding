#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

void mult(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", i, j, i*j);
		}
		printf("\n");
	}
}
	int main()
	{
		int n = 0;
		printf("请输入你想打印的乘法口诀表行列数：\n");
		scanf("%d", &n);
		mult(n);
	
	system("pause");
	return 0;
}
