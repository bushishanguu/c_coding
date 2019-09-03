#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "assert.h"


//1.Ä£ÄâÊµÏÖstrncpy
char * my_strncpy(char *dst, const char *src, int n)
{
	assert(dst);
	assert(src);
	assert(n > 0);
	
	char *temp = dst;
	while (n--)
	{
		*dst++ = *src++;
	}
	return temp;
}
int main()
{
	char a[20] = "abcdefg";
	char *p = "1234";
	int n = 0;
	char *ret = my_strncpy(a, p, 5);
	printf("%s\n", ret);
	system("pause");
	return 0;
}