#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//�������������Լ��
int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	int i = 0;
	printf("������Ҫ���������Լ��������  ");
	scanf("%d %d", &a, &b);
	n = a;
	if (a > b)
		n = b; //ȡ�������е���Сֵ

	for (i = n; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("���Լ��Ϊ%d\n", i);
			break;
		}
	}

	system("pause");
	return 0;
}