#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	return n % 10 + DigitSum(n / 10);

}
int main()
{
	int n = 0;
	int sum = 0;
	printf("������Ǹ�����n   \n");
	scanf("%d", &n);
	printf("%d\n", DigitSum(n));
	system("pause");
	return 0;
}