#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//ʵ��һ�������ж�year�ǲ������ꡣ
void year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		printf("%d��������\n", n);
	}
	else
	{
		printf("%d�겻������\n", n);
	}
}
int main()
{
	int n = 0;
	printf("����������Ҫ���ҵ����  ");
	while (scanf("%d", &n) != EOF)
	{year(n); }
	system("pause");
	return 0;
}