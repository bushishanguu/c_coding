#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
	printf("����������Ҫ��ת�ַ��ĸ���\n");
	scanf("%d", &k);
	Left_Move(arr,k);
	printf("%s\n",arr );
	system("pause");
	return 0;
}
