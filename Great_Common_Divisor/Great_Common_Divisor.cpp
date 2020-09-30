#include<stdio.h>
int Maxnumber(int a, int b);
int main()
{
	long num[2],x[2];
	for (int i = 0; i < 2; i++)
	{
		if (scanf_s("%d", &num[i]) != 1)
		{
			printf("Error");
			return 0;
		}
		else if (num[i] <=0 || num[i] > 2000000000)
		{
			printf("Error");
			return 0;
		}
		x[i] = num[i];
	}

	for (int i = Maxnumber(x[0], x[1]); i > 0; i--)
	{
		if (x[0] % i == 0 && x[1] % i == 0)
		{
			printf("%d", i);
			i = 0;
		}
	}
	return 0;
}

int Maxnumber(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}