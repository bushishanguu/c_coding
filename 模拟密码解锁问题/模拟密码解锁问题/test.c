#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//模拟密码解锁问题
int main()
{
	int i = 0;
	char psw[10] = " ";
	for (i = 0; i < 3;i++)
	{
		printf("请输入密码  ");
		scanf("%s", &psw);
		
		if (strcmp(psw, "password") == 0)
			break;
	}
	if (i == 3)
		printf("exit\n");
	else
		printf("log in\n");

	system("pause");
	return 0;
}