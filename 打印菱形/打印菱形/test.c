#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

////1.����Ļ���������ͼ��(��ӡ�����Σ���
int main()
{
	int i = 0;//�ո�
	int j = 0;//*
	int n = 0;//��

	//��ӡǰ7��
	for (n = 1; n <= 7; n++)
	{
		for (i = 1; i <= (7 - n); i++)
			printf(" ");
		for (j = 1; j <= (2*n - 1); j++)
			printf("*");
		printf("\n");
	}

	//��ӡ��6��
	for (n = 6; n >= 1; n--)
	{
		for (i = 1;i<=(7-n);i++)
			printf(" ");
		for (j = 1; j <= (2 * n - 1); j++)
			printf("*");
		printf("\n");
	}

	system("pause");
	return 0;
}
