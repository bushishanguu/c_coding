#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
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
	printf("*****1.初始化数组*************\n");
	printf("*****2.逆置数组  *************\n");
	printf("*****3.清空数组  *************\n");
	printf("*****0.退出      *************\n");

}
int main()
{
	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	do
	{
		menu();
		printf("请选择  ");
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
			printf("程序结束\n");
			break;

		}
	} while (n);


	system("pause");
	return 0;

}