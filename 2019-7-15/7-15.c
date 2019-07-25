#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

////1.在屏幕上输出以下图案(打印出菱形）：
//int main()
//{
//	int i = 0;//空格
//	int j = 0;//*
//	int n = 0;//行
//
//	//打印前7行
//	for (n = 1; n <= 7; n++)
//	{
//		for (i = 1; i <= (7 - n); i++)
//			printf(" ");
//		for (j = 1; j <= (2*n - 1); j++)
//			printf("*");
//		printf("\n");
//	}
//
//	//打印后6行
//	for (n = 6; n >= 1; n--)
//	{
//		for (i = 1;i<=(7-n);i++)
//			printf(" ");
//		for (j = 1; j <= (2 * n - 1); j++)
//			printf("*");
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//2.求出0～999之间的所有“水仙花数”并输出。

//	int main()
//	{
//		int i = 0;//输入的数字
//		int j = 0;//个位取余
//		int k = 0;//十位取余
//		int n = 0;//百位取余
//
//		for (i = 0; i <= 999; i++)
//		{
//			j = i % 10;
//			k = (i / 10) % 10;
//			n = i /100;
//			if (j*j*j + k*k*k + n*n*n == i)
//				printf("%d ", i);
//		}
//
//	system("pause");
//	return 0;
//
//}


//3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int Sn = 0;
	int t = 0;
	printf("请输入数字n（前几项和）  ");
	scanf("%d", &n);
	printf("请输入数字a    ");
	scanf("%d", &a);
	for (i=1;i<=n;i++)
	{
		t=t * 10 + a;
		Sn = Sn + t;
	}
	printf("Sn=%d", Sn);
	system("pause");
	return 0;
}