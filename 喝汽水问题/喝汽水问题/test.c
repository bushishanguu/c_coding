#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <assert.h>


//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ��
int  Sum(int n)
{
	int i = n;//������ˮ������
	int j = n;//��ƿ�ӵ�����
	while (j > 1)
	{
		i = i + j / 2;
		j = j / 2+j%2;
	}
	return i;
}
int main()
{
	int i = 0;
	int n = 0;
	printf("������Ǯ��\n");
	scanf("%d", &n);
	i=Sum(n);
	printf("%d\n", i);
	system("pause");
	return 0;
}
