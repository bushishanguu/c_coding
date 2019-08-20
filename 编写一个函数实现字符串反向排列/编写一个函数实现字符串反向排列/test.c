#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
int reverse_string(char * string)
{
	if (*string != '\0')
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}
int main()
{
	char string[20] = { 0 };
	int ret = 0;
	printf("请输入一行字符串\n");
	gets(string);
	reverse_string(string);
	system("pause");
	return 0;

}