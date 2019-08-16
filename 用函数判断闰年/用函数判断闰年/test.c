#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//实现一个函数判断year是不是润年。
void year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		printf("%d年是闰年\n", n);
	}
	else
	{
		printf("%d年不是闰年\n", n);
	}
}
int main()
{
	int n = 0;
	printf("请输入你想要查找的年份  ");
	while (scanf("%d", &n) != EOF)
	{year(n); }
	system("pause");
	return 0;
}