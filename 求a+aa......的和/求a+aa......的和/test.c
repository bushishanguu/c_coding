#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
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
	for (i = 1; i <= n; i++)
	{
		t = t * 10 + a;
		Sn = Sn + t;
	}
	printf("Sn=%d", Sn);
	system("pause");
	return 0;
}