#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//¼ÆËã1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ¡­¡­ + 1 / 99 - 1 / 100 µÄÖµ
int main()
{
	int i = 0;
	double sum = 0;
	int a = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + a * 1.0 / i;
		a = -a;
	}

		printf("sum=%f\n", sum);
	
	system("pause");
	return 0;
}
