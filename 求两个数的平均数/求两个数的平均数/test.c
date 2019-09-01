#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
int Aver(int a, int b)
{
	if (a > b)
	{
		return (b)+((a - b) / 2);
	}
	else 
	{
		return (a)+((b - a) / 2);
	}
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字\n");
	scanf("%d %d", &a, &b);
	int ret = Aver(a, b);
	printf("%d", ret);
	system("pause");
	return 0;
}