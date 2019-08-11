#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//2.写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（折半查找）
int main()
{
	int arr[10] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	int left = 0;
	int right = 10 - 1;
	int i = 0;
	int mid;
	printf("请输入要查找的数字\n");
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
		printf("找到了%d,它的下标是%d \n", i, mid);
	}
	else
	{
		printf("没找到%d", i);
	}
	system("pause");
	return 0;
}
