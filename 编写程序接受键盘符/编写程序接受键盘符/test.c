#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//.4编写一个程序，可以一直接收键盘字符
int main()
{
	int num = 0;
	printf("请输入字符");
	while ((num = getchar())!= EOF)
	{
		
		if (num >= 'a'&&num <= 'z')
		{
			printf("%c\n", num -32);
		}
		if (num >= 'A'&&num <= 'Z')
		{
			printf("%c\n", num + 32);
		}
		if (num>= '0'&& num <= ' 9')
		{
			continue;
		}
	}

	system("pause");
	return 0;
}