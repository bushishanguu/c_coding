#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
int main()
{
	int arr[] = { 1, 2, 3, 4,  3, 2, 1 };
	int i = 0;
	int tmp = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)//��ӡ
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)//�������������ɶԵ�
	{
		tmp =tmp^ arr[i];
	}
	printf("����һ�ε���Ϊ %d\n", tmp);
	system("pause");
	return 0;
}