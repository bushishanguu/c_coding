#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������


//�ݹ�
//int fab(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fab(n - 1) + fab(n - 2);
//}

//�ǵݹ�
int fab(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2)
		return 1;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
	}
	return c;
}



int main()
{
	int n = 0;
	printf("��������Ҫ�������  \n");
	scanf("%d", &n);
	int ret = fab(n);
	printf("%d  ", ret);
	system("pause");
	return 0;
}