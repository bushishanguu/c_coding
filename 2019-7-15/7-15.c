#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"

////1.����Ļ���������ͼ��(��ӡ�����Σ���
//int main()
//{
//	int i = 0;//�ո�
//	int j = 0;//*
//	int n = 0;//��
//
//	//��ӡǰ7��
//	for (n = 1; n <= 7; n++)
//	{
//		for (i = 1; i <= (7 - n); i++)
//			printf(" ");
//		for (j = 1; j <= (2*n - 1); j++)
//			printf("*");
//		printf("\n");
//	}
//
//	//��ӡ��6��
//	for (n = 6; n >= 1; n--)
//	{
//		for (i = 1;i<=(7-n);i++)
//			printf(" ");
//		for (j = 1; j <= (2 * n - 1); j++)
//			printf("*");
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//2.���0��999֮������С�ˮ�ɻ������������

//	int main()
//	{
//		int i = 0;//���������
//		int j = 0;//��λȡ��
//		int k = 0;//ʮλȡ��
//		int n = 0;//��λȡ��
//
//		for (i = 0; i <= 999; i++)
//		{
//			j = i % 10;
//			k = (i / 10) % 10;
//			n = i /100;
//			if (j*j*j + k*k*k + n*n*n == i)
//				printf("%d ", i);
//		}
//
//	system("pause");
//	return 0;
//
//}


//3.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int Sn = 0;
	int t = 0;
	printf("����������n��ǰ����ͣ�  ");
	scanf("%d", &n);
	printf("����������a    ");
	scanf("%d", &a);
	for (i=1;i<=n;i++)
	{
		t=t * 10 + a;
		Sn = Sn + t;
	}
	printf("Sn=%d", Sn);
	system("pause");
	return 0;
}