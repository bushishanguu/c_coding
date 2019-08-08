#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

//1.完成猜数字游戏

int main()
{
	int i = 9;
	int n = 0;
	printf("请输入一个数字\n");
	while (1)
	{
		scanf("%d", &n);
		if (n > i)
		{
			printf("猜大了\n");
		}
		else  if(n < i)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
		}
	}
	system("pause");
	return 0;
}