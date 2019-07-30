#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

//不允许创建临时变量，交换两个数的内容
int main()
{
	int a=0;
	int b=0;
	
	printf("请分别输入两个数：");
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}