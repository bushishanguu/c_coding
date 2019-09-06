#define _CRT_SECURE_NO_WARNINGS 1


#include "stdio.h"
#include "stdlib.h"

//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
int main()
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int arr[9] = {0};
	
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请输入一个整数数组\n");
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