#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//3.��д����ģ��������������ĳ�����
#include "string.h"
int main()
{
	char *password = "qwert";
	char input[1024] = { 0 };
	int i = 0;
	printf("����������  ");
	while (i <= 3)
	{
		scanf("%s", &input);
		i++;
		if (strcmp(password,input)==0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			if (i < 3)
			{
				printf("�����������������\n");
			}
			else
			{
				printf("�˳�\n");
				break;
			}
		}
	}
	system("pause");
	return 0;
}

