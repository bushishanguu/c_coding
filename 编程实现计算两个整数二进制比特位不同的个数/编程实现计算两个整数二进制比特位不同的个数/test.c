#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��

int main()
{
	int i = 0;
	int num1 = 0;
	int num2 = 0;
	int count = 0;
	int t = 0;
	printf("��������������  \n");
	scanf("%d %d", &num1, &num2);
	for (i = 0; i <= 31; i++)
	{
		printf("%d", (num1 >> i) & 1);
	}
	printf("\n");
	for (i = 0; i <= 31; i++)
	{
		printf("%d", (num2 >> i) & 1);
	}
	printf("\n");
	t = num1^num2;
	printf("\n");
	for (i = 0; i <= 31; i++)
	{
		if ((t >> i) & 1)
			count++;
	}
	printf("�����������в�ͬ�ı���λ��λΪ%d\n", count);
	system("pause");
	return 0;
}