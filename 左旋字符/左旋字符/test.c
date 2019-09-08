#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
char* Left_Move(char* str,int k)
{
	int i = 0;
	int j = 0;
	int len = strlen(str)-1;
	for (i = 0; i < k; i++)
	{
		char tmp = str[0];
		for (j = 0; j < len; j++)
		{
			str[j] = str[j + 1];
		}
		str[len] = tmp;
	}
	return str ;
}

int main()
{
	/*char arr[] ="ABCD" ;*/

	char arr[] = { 0 };
	scanf("%s",arr);
	int k = 0;
	printf("请输入你所要旋转字符的个数\n");
	scanf("%d", &k);
	Left_Move(arr,k);
	printf("%s\n",arr );
	system("pause");
	return 0;
}
