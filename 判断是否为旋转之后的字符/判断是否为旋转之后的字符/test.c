#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

// 第一种做法
//暴力法

char Check_Move(char str1[], char str2[])
{
	int i = 0;
	int j = 0;
	int len = strlen(str1);
	for (i = 0; i <=len; i++)
	{
		char tmp = str1[0];
		for (j = 0; j <len-1 ; j++)
		{
			str1[j] = str1[j + 1];
		}
		str1[len-1] = tmp;
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = { 0 };
	char arr2[] = { 0 };
	scanf("%s %s", arr1,arr2);
	Check_Move(arr1, arr2);
	if (Check_Move(arr1, arr2) == 1)
		printf("字符串为另外一个字符串旋转之后的字符串\n");
	else
		printf("字符串不为另外一个字符串旋转之后的字符串\n");
	system("pause");
	return 0;
}
