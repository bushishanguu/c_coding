#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
int reverse_string(char * string)
{
	if (*string != '\0')
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}
int main()
{
	char string[20] = { 0 };
	int ret = 0;
	printf("������һ���ַ���\n");
	gets(string);
	reverse_string(string);
	system("pause");
	return 0;

}