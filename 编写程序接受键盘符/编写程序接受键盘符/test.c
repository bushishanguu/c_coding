#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//.4��дһ�����򣬿���һֱ���ռ����ַ�
int main()
{
	int num = 0;
	printf("�������ַ�");
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