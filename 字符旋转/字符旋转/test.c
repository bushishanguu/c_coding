#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB


//�ڶ�������
void reverse(char *left, char *right)
{
	assert(left&&right);
	while (left < right)
	{
		char temp =* left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void left_move(char arr[],int k)
{
	int len = strlen(arr);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
int main()
{
	/*char arr[] ="ABCD" ;*/

	char arr[] = "abcdef";
	left_move(arr,2);
	printf("%s\n",arr );
	system("pause");
	return 0;
}