#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//2.д����������������������в�����Ҫ�����֣� �ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
int main()
{
	int arr[10] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	int left = 0;
	int right = 10 - 1;
	int i = 0;
	int mid;
	printf("������Ҫ���ҵ�����\n");
	scanf("%d", &i);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (i > arr[mid])
		{
			left = mid + 1;
		}
		else if (i < arr[mid])
		{
			right = mid + 1;
		}
		else
		{
			break;
		}
	}

	if (left <= right)
	{
		printf("�ҵ���%d,�����±���%d \n", i, mid);
	}
	else
	{
		printf("û�ҵ�%d", i);
	}
	system("pause");
	return 0;
}
