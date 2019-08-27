#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

void Check(int A, int B, int C, int D, int E)
{
	for (A = 1; A <= 5; ++A)
	{
		for (B = 1; B <= 5; ++B)
		{
			for (C = 1; C <= 5; ++C)
			{
				for (D = 1; D <= 5; ++D)
				{
					for (E = 1; E <= 5; ++E)
					{
						//下面（）里的只能有一个是对的，另一个就是错的
						//对的那个结果为1，错的那个结果为0，加起来为1
						if ((B == 2) + (A == 3) == 1 &&
							(B == 2) + (E == 4) == 1 &&
							(C == 1) + (D == 2) == 1 &&
							(C == 5) + (D == 3) == 1 &&
							(E == 4) + (A == 1) == 1)
						{
							if (A*B*C*D*E == 120)
							{
								printf("A是第%d名\n", A);
								printf("B是第%d名\n", B);
								printf("C是第%d名\n", C);
								printf("D是第%d名\n", D);
								printf("E是第%d名\n", E);
							}
						}
					}
				}
			}
		}
	}
}

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	Check(A, B, C, D, E);
	system("pause");
	return 0;
}