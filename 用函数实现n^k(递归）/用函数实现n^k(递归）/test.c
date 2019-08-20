#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//2.编写一个函数实现n^k，使用递归实现


int fun(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	else
	if (b == 1)
	{
		return a;
	}
	else
	{
		return a*fun(a, b - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
		printf("请输入n和k   \n");
	scanf("%d %d", &n, &k);
	printf("%d\n", fun(n, k));
	system("pause");
	return 0;
}
