#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"




// ¥Ú”°æ≈æ≈≥À∑®±Ì
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, j*i);
			if (i == j)
				printf("\n");
		}
	}

	system("pause");
	return 0;
}
