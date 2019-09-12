#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <assert.h>

//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 2, 4, 1, 3, 5, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (j = 0; j < sz + 1; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		
//		}
//		if (count == 1)
//		{
//			printf("%d  ", arr[i]);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
void find_num(int arr[], int sz, int *p1, int *p2)
{
	int ret = 0;
	int i = 0;
	int pos = 0;


	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
			pos = i;
		break;
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
			*p1 ^= arr[i];
	}
	*p2 = *p1^ret;

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 4, 3, 2, 1, 5, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;

	find_num(arr, sz, &num1, &num2);
	printf("num1=%d,num2=%d\n", num1, num2);
	system("pause");
	return 0;
}

