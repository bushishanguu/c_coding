#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）


int main()
{
	int i = 0;
	int a[10] = { 0 };
	int b[10] = { 0 };
	int t[10] = { 0 };
	printf("请输入数组a ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("请输入数组b ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}

	for (i = 0; i < 10; i++)
	{
		t[i] = a[i];
		a[i] = b[i];
		b[i] = t[i];
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}

	system("pause");
	return 0;

}
