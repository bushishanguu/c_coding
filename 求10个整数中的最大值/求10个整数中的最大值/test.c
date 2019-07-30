#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//求10个整数中的最大值
int main()
{
	int i = 0;
	int a[10] = { 0 };
	int n = 0;
	printf("请输入10个数 ");
	for (i = 0; i <= 9;i++)
	scanf("%d", &a[i]);
	for (i = 0; i <= 9; i++)
	{
		if (a[i] > n)
		n = a[i];
		
	}
	printf("最大数为：%d\n", n);


	system("pause");
	return 0;
}