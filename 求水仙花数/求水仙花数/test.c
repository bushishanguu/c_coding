#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//2.���0��999֮������С�ˮ�ɻ������������

	int main()
	{
		int i = 0;//���������
		int j = 0;//��λȡ��
		int k = 0;//ʮλȡ��
		int n = 0;//��λȡ��

		for (i = 0; i <= 999; i++)
		{
			j = i % 10;
			k = (i / 10) % 10;
			n = i /100;
			if (j*j*j + k*k*k + n*n*n == i)
				printf("%d ", i);
		}

	system("pause");
	return 0;

}