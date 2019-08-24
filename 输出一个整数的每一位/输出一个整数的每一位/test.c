#define _CRT_SECURE_NO_WARNINGS 1
//3. 输出一个整数的每一位。
#include "stdio.h"
#include "stdlib.h"

void Print(int n)
{
	if (n > 9)
	{
		{
			Print(n / 10);
		}
		printf("%d ", n % 10);
	}
	else
	{
		printf("%d ", n);
     }
}
int main()
{
	int num = 0;
	printf("请输入一个整数  \n");
	scanf("%d", &num);
	Print(num);
	system("pause");
	return 0;
}
