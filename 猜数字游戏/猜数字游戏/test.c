#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

//1.��ɲ�������Ϸ

int main()
{
	int i = 9;
	int n = 0;
	printf("������һ������\n");
	while (1)
	{
		scanf("%d", &n);
		if (n > i)
		{
			printf("�´���\n");
		}
		else  if(n < i)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
		}
	}
	system("pause");
	return 0;
}