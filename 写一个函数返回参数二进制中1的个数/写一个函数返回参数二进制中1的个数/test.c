#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"


//1.дһ���������ز����������� 1 �ĸ���

int main()
{
	int num = 0;
	int i = 0;
	int count = 0;
	printf("������һ������  \n");
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
			count++;
	}
	printf("��������1�ĸ���Ϊ%d\n", count);
	system("pause");
	return 0;
}