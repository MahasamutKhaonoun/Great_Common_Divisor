#include<stdio.h>
int Maxnumber(int a, int b);
int main()
{
	long num[2];
	long* n = num;
	for (int i = 0; i < 2; i++)
	{
		if (scanf_s("%d", &num[i]) != 1)
		{
			printf("Error");
			return 1;
		}
	}

	for (int i = Maxnumber(*n , *(n+1)) ; i > 0; i--)
	{
		if (*n % i == 0 && *(n+1) % i == 0)
		{
			printf("%d", i);
			i = 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int Maxnumber(int a, int b)
{
	if ((a > 0 && a < 2000000000) && (b > 0 && b < 2000000000))
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
	else
	{
		printf("Error");
		return 1;
	}
}