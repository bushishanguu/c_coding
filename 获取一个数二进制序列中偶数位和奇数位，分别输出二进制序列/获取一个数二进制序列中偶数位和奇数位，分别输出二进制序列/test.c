#define _CRT_SECURE_NO_WARNINGS 1
//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
#include "stdio.h"
#include "stdlib.h"
int main()
{
	int i = 0;
	int num = 0;
	printf("请输入一个十进制的数字  \n");
	scanf("%d", &num);
	printf("二进制位序列\n");
	for (i = 31; i >= 0; i--)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	printf("奇数位序列\n");
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("偶数位序列\n");

	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	system("pause");
	return 0;
}