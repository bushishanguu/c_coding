#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//使用函数实现两个数的交换。

void swap(int *n, int *m)
{
	int t = 0;
	t = *n;
	*n = *m;
	*m = t;
	
}
int main()
{
	int n = 0;
	int m = 0;
	printf("请输入想要交换的两个数字   ");
	scanf("%d %d", &n, &m);
	swap(&n, &m);
	printf("交换后的数字为n=%d ,m=%d", n, m);
	system("pause");
}