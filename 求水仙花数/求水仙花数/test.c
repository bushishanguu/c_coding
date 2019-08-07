#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"

//2.求出0～999之间的所有“水仙花数”并输出。

	int main()
	{
		int i = 0;//输入的数字
		int j = 0;//个位取余
		int k = 0;//十位取余
		int n = 0;//百位取余

		for (i = 0; i <= 999; i++)
		{
			j = i % 10;
			k = (i / 10) % 10;
			n = i /100;
			if (j*j*j + k*k*k + n*n*n == i)
				printf("%d ", i);
		}

	system("pause");
	return 0;

}