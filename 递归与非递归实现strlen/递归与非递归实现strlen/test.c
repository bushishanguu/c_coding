#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//�ǵݹ�
//int we_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ�
int we_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1+we_strlen(str + 1);
	}
}
int main()
{
	char str[20] = { 0 };
	int ret = 0;
	printf("������һ���ַ���\n");
	gets(str);
	ret = we_strlen(str);
	printf("%d\n", ret);
	system("pause");
	return 0;

}
