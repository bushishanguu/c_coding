#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//1.递归和非递归分别实现求第n个斐波那契数


//递归
//int fab(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fab(n - 1) + fab(n - 2);
//}

//非递归
int fab(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2)
		return 1;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
	}
	return c;
}



int main()
{
	int n = 0;
	printf("请输入所要求的数字  \n");
	scanf("%d", &n);
	int ret = fab(n);
	printf("%d  ", ret);
	system("pause");
	return 0;
}