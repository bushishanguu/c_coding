#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
void init(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void empty(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int arr[], int size)
{
	int tmp = 0;
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void print(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
void menu()
{
	printf("******************************\n");
	printf("*****1.��ʼ������*************\n");
	printf("*****2.��������  *************\n");
	printf("*****3.�������  *************\n");
	printf("*****0.�˳�      *************\n");

}
int main()
{
	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	do
	{
		menu();
		printf("��ѡ��  ");
		scanf("%d", &n);

		switch (n)
		{
		case 1:init(arr, size);
			print(arr, size);
			break;
		case 2:reverse(arr, size);
			print(arr, size);
			break;
		case 3:empty(arr, size);
			print(arr, size);
			break;
		default:
			printf("�������\n");
			break;

		}
	} while (n);


	system("pause");
	return 0;

}