#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
int main()
{
	char killer;
	for (killer = 'A'; killer <= 'Z'; killer++)//����ASCII��ֵ  ����ѭ���Ƚ�
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)) //1+1+0+1=3
		{
			printf("%c������\n", killer);
			break;
		}
	}
	system("pause");
	return 0;
}