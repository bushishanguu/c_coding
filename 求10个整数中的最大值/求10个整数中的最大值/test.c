#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//��10�������е����ֵ
int main()
{
	int i = 0;
	int a[10] = { 0 };
	int n = 0;
	printf("������10���� ");
	for (i = 0; i <= 9;i++)
	scanf("%d", &a[i]);
	for (i = 0; i <= 9; i++)
	{
		if (a[i] > n)
		n = a[i];
		
	}
	printf("�����Ϊ��%d\n", n);


	system("pause");
	return 0;
}