#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//ʹ�ú���ʵ���������Ľ�����

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
	printf("��������Ҫ��������������   ");
	scanf("%d %d", &n, &m);
	swap(&n, &m);
	printf("�����������Ϊn=%d ,m=%d", n, m);
	system("pause");
}