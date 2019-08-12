#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//3.编写代码模拟三次密码输入的场景。
#include "string.h"
int main()
{
	char *password = "qwert";
	char input[1024] = { 0 };
	int i = 0;
	printf("请输入密码  ");
	while (i <= 3)
	{
		scanf("%s", &input);
		i++;
		if (strcmp(password,input)==0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			if (i < 3)
			{
				printf("密码错误，请重新输入\n");
			}
			else
			{
				printf("退出\n");
				break;
			}
		}
	}
	system("pause");
	return 0;
}

