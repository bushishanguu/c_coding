#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <assert.h>


//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现
int  Sum(int n)
{
	int i = n;//喝了汽水的数量
	int j = n;//空瓶子的数量
	while (j > 1)
	{
		i = i + j / 2;
		j = j / 2+j%2;
	}
	return i;
}
int main()
{
	int i = 0;
	int n = 0;
	printf("请输入钱数\n");
	scanf("%d", &n);
	i=Sum(n);
	printf("%d\n", i);
	system("pause");
	return 0;
}
