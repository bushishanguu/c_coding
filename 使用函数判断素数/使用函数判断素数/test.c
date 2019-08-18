#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//5.实现一个函数，判断一个数是不是素数。

 void prime(int n)
{
	int j= 0;
	for (j = 2; j <n; ++j)
	{
		if (n%j == 0)
		{
			printf("%d不是素数", n);
			break;
		}
	}
	if (j == n)
	{
		printf("%d是素数", n);
	}
}

	int main()
	{
		int n = 0;
		printf("请输入你想要判断的数字  ");
		scanf("%d", &n);
		prime(n);
		
		system("pause");
		return 0;
	}