#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
	int i = 0;//��һ��
	int j = col - 1;//���һ��
	while ((j >= 0) && (i <= 2))//��Χ֮��
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
	printf("������Ҫ���ҵ�����\n");
	scanf("%d", &key);
	Reseach(arr, row, col, key);
	if (Reseach(arr, row, col, key) == 1)
		printf("�ҵ���\n");
	else
		printf("û�ҵ�\n");
	system("pause");
	return 0;

}