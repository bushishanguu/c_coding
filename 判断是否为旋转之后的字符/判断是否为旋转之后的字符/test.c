#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

// ��һ������
//������

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
		printf("�ַ���Ϊ����һ���ַ�����ת֮����ַ���\n");
	else
		printf("�ַ�����Ϊ����һ���ַ�����ת֮����ַ���\n");
	system("pause");
	return 0;
}
