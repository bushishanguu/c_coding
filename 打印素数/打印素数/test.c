#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"


//���100-200֮�������

int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf(" %d\n", i);
		}
	}
	system("pause");
	return 0;
}