#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
int Reseach(int arr[][3], int row, int col, int key)
{
	int i = 0;//第一行
	int j = col - 1;//最后一列
	while ((j >= 0) && (i <= 2))//范围之内
	{
		if (arr[i][j] == key)

			return 1;

		else if (arr[i][j] < key)

			i++;

		else
			j--;
	}
	return 0;
}
int main()
{
	int arr[][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int key = 0;
	int row = 3;
	int col = 3;
	printf("请输入要查找的数字\n");
	scanf("%d", &key);
	Reseach(arr, row, col, key);
	if (Reseach(arr, row, col, key) == 1)
		printf("找到了\n");
	else
		printf("没找到\n");
	system("pause");
	return 0;

}