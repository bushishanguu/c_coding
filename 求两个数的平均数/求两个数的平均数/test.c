#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
int Aver(int a, int b)
{
	if (a > b)
	{
		return (b)+((a - b) / 2);
	}
	else 
	{
		return (a)+((b - a) / 2);
	}
}
int main()
{
	int a = 0;
	int b = 0;
	printf("��������������\n");
	scanf("%d %d", &a, &b);
	int ret = Aver(a, b);
	printf("%d", ret);
	system("pause");
	return 0;
}