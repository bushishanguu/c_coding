#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？

int main()
{
	int i = 0;
	int num1 = 0;
	int num2 = 0;
	int count = 0;
	int t = 0;
	printf("请输入两个整数  \n");
	scanf("%d %d", &num1, &num2);
	for (i = 0; i <= 31; i++)
	{
		printf("%d", (num1 >> i) & 1);
	}
	printf("\n");
	for (i = 0; i <= 31; i++)
	{
		printf("%d", (num2 >> i) & 1);
	}
	printf("\n");
	t = num1^num2;
	printf("\n");
	for (i = 0; i <= 31; i++)
	{
		if ((t >> i) & 1)
			count++;
	}
	printf("两个整数当中不同的比特位个位为%d\n", count);
	system("pause");
	return 0;
}