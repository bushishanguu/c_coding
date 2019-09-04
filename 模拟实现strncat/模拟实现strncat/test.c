#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "assert.h"



//2.Ä£ÄâÊµÏÖstrncat
char *my_strncat(char *dst, const char *src, int count)
{
	assert(dst);
	assert(src);
	char *temp = dst;
	int i = 0;
	while (*dst != '\0')
	{
		dst++;
	}
	for (i = 0; i < count; i++)
	{
		*dst = *src;
		dst++;
		*src++;
	}
	return temp;
}
int main()
{
	char a[10] = { 'a', 'b', 'c', '\0' };
	char b[20] = "hello hi bit" ;
	int n = 5;
	char *ret = my_strncat(a, b, n);
	printf("%s\n", ret);
	system("pause");
	return 0;
}