#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

//�����������ͱ�����ֵ
int main()
{
	int a=0;
	int b=0;
	int c=0;
	printf("��������������");
	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
