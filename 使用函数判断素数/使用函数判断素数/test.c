#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//5.ʵ��һ���������ж�һ�����ǲ���������

 void prime(int n)
{
	int j= 0;
	for (j = 2; j <n; ++j)
	{
		if (n%j == 0)
		{
			printf("%d��������", n);
			break;
		}
	}
	if (j == n)
	{
		printf("%d������", n);
	}
}

	int main()
	{
		int n = 0;
		printf("����������Ҫ�жϵ�����  ");
		scanf("%d", &n);
		prime(n);
		
		system("pause");
		return 0;
	}