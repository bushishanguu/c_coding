#define _CRT_SECURE_NO_WARNINGS 1


#include "stdio.h"
#include "stdlib.h"

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
int main()
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int arr[9] = {0};
	
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("������һ����������\n");
	for (i = 0; i <=len - 1; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (j = 0; j < len - 1; j++)
	{
		for (i = 0; i < len-1; i++)
		{
			if (arr[i] % 2 == 0 && (arr[i + 1] % 2 == 1))
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	for (i= 0; i <=len-1; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}