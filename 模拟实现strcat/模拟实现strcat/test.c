#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <assert.h>


//Ä£ÄâÊµÏÖstrcat
char *My_Strcat(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*ret!='\0')
	{
		*ret++;
	}
	while ((*ret++ = *src++))//(*src!='\0')
	{
		;
	}
	return ret;
}

int main()
{
	char str1[20] = "Hello";
	char str2[] = " bit";
	My_Strcat(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}



