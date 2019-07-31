#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//求两个数的最大公约数
int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	int i = 0;
	printf("请输入要求两个最大公约数的数字  ");
	scanf("%d %d", &a, &b);
	n = a;
	if (a > b)
		n = b; //取两个数中的最小值

	for (i = n; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("最大公约数为%d\n", i);
			break;
		}
	}

	system("pause");
	return 0;
}