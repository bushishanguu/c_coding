#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <assert.h>

//Ä£ÄâÊµÏÖstrcpy


char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//¶ÏÑÔ
	assert(src != NULL);//¶ÏÑÔ

	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "#########";
	char arr2[] =   "hello bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}
