#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "assert.h"



//3.Ä£ÄâÊµÏÖstrncmp
char my_strncmp(const char *str1, const char *str2, int n)
{
	assert(str1);
	assert(str2);
	assert(n > 0);
	const char *p = str1;
	const char *q = str2;
	while (*p != '\0'&&*q != '\0' && (n--))
	{
		if (*p == *q)
		{
			p++;
			q++;
		}
		else if (*p > *q)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	if (*p != '\0')
	{
		return 1;
	}
	if (*q != '\0')
	{
		return -1;
	}
}
int main()
{
	char *p = "abcd123456";
	char *q = "abcd789123";
	int n = 5;
	char ret = my_strncmp(p, q, n);
	printf("%d\n", ret);
	system("pause");
	return 0;

}