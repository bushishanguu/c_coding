#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
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
	for (i = 1; i <= n; i++)
	{
		t = t * 10 + a;
		Sn = Sn + t;
	}
	printf("Sn=%d", Sn);
	system("pause");
	return 0;
}