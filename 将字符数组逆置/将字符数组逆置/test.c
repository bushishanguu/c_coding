#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//4.
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�


void swap(char *left, char * right)//����
{
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
//�ֱ�����ÿһ������
void  reverse(char *str)
{
	int len = strlen(str);
	swap(str, str + len - 1);//�����彻��
	while (*str != '\0')
	{
		char *start = str;//���ʿ�ʼλ��
		char *end = start;//���ʽ���λ��
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		swap(start, end - 1);//����һ������֮�� ����  end-1Ϊ�������һ����ĸ(����λ�ã�
		if (*end != '\0')
		{
			str = end + 1;
		}//һ�����ʽ�����  ��һ�����ʿ�ʼΪ�ո���һ���ַ�
		else
		{
			str = end;
		}
	}
}

int main()
{
	char str[] = "student a am i";
	reverse(str);//�����������ȥ
	printf("%s\n", str);
	system("pause");
	return 0;
}