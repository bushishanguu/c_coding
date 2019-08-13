#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//查找数字
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 7;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (key < arr[mid])
		{
			right = mid - 1;
		}
		else if (key>arr[mid])
		{
			left = mid + 1;
		}
		else break;
	}
	if (left < right)
		printf("找到了,它的下标是%d\n", mid);
	else
		printf("未找到%d\n");

	system("pause");
	return 0;
}