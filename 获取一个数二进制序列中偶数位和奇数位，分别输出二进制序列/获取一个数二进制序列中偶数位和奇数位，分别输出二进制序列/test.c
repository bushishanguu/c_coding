#define _CRT_SECURE_NO_WARNINGS 1
//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
#include "stdio.h"
#include "stdlib.h"
int main()
{
	int i = 0;
	int num = 0;
	printf("������һ��ʮ���Ƶ�����  \n");
	scanf("%d", &num);
	printf("������λ����\n");
	for (i = 31; i >= 0; i--)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	printf("����λ����\n");
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("ż��λ����\n");

	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	system("pause");
	return 0;
}