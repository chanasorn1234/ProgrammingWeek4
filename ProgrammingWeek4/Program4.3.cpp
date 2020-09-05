#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int Calculate(int i, int Result);
int main()
{
	int x,Result = 10;
	char end[] = { '¨','º', 'â', '»', 'Ã', 'à', 'à', '¡', 'Ã', 'Á' };
	printf("Enter Number: ");
	scanf("%d", &x);
	

	if (x > 0)
	{
		printf("2+3+5");
		for (int i = 6; i < x; i++)
		{
			if (i % 2 != 0 & i % 3 != 0 & i % 5 != 0)
			{
				printf("+");
				printf("%d", i);
				Result = Calculate(i, Result);
			}
			Sleep(100);

		}
		printf(" = %d\n\n", Result);
	}
	else
	{
		printf("No Result\n");
				
	}
	
	for (int j = 0; j <= 9; j++)
	{
		printf("%c\n", end[j]);
	}
		
	return 0;
}
int Calculate(int i, int Result)
{
	Result += i;
	return Result;
}
