#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"


//1.写一个函数返回参数二进制中 1 的个数

int main()
{
	int num = 0;
	int i = 0;
	int count = 0;
	printf("请输入一个数字  \n");
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
			count++;
	}
	printf("二进制中1的个数为%d\n", count);
	system("pause");
	return 0;
}