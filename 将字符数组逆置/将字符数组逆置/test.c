#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）


void swap(char *left, char * right)//逆置
{
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
//分别逆置每一个单词
void  reverse(char *str)
{
	int len = strlen(str);
	swap(str, str + len - 1);//先整体交换
	while (*str != '\0')
	{
		char *start = str;//单词开始位置
		char *end = start;//单词结束位置
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		swap(start, end - 1);//查找一个单词之后 交换  end-1为单词最后一个字母(结束位置）
		if (*end != '\0')
		{
			str = end + 1;
		}//一个单词结束后  下一个单词开始为空格后的一个字符
		else
		{
			str = end;
		}
	}
}

int main()
{
	char str[] = "student a am i";
	reverse(str);//传整个数组过去
	printf("%s\n", str);
	system("pause");
	return 0;
}