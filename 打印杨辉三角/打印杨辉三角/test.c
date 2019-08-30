#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//3.在屏幕上打印杨辉三角
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10 - i; k++)
		{
			printf(" ");
		}
		for (j = 0; j <=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}