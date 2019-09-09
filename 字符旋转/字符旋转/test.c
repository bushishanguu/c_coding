#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB


//第二种做法
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