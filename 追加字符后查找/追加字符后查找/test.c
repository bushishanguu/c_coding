#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"





//.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC



//�ڶ�������    �ַ���׷��һ���Լ�֮����в���
int is_leftmove(char* str1, char*str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if (len1 != len2)
		return 0;
	strncat(str1, str1, len1);
	if (strstr(str1, str2) == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "cdefab";
	if (is_leftmove(arr1, arr2) == 1)
		printf("yes\n");
	else
		printf("no\n");
	system("pause");
	return 0;
}