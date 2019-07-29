#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

//交换两个整型变量的值
int main()
{
	int a=0;
	int b=0;
	int c=0;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
