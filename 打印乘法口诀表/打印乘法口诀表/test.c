#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

void mult(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", i, j, i*j);
		}
		printf("\n");
	}
}
	int main()
	{
		int n = 0;
		printf("�����������ӡ�ĳ˷��ھ�����������\n");
		scanf("%d", &n);
		mult(n);
	
	system("pause");
	return 0;
}
