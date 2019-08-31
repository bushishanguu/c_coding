#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
int main()
{
	int arr[] = { 1, 2, 3, 4,  3, 2, 1 };
	int i = 0;
	int tmp = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)//打印
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)//依次异或抵消掉成对的
	{
		tmp =tmp^ arr[i];
	}
	printf("出现一次的数为 %d\n", tmp);
	system("pause");
	return 0;
}