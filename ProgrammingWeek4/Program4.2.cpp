#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Result1 = 0, Result2 = 0;
int Calculatesum(int x, int Result1);
int Calculatesquare(int y, int Result2);
int main()
{
	int x, y,m,n;
	char end[] = { 'E','n', 'd', ' ', 'P', 'r', 'o', 'g', 'r', 'a', 'm' };
	printf("Enter number sum of the squares: ");
	scanf("%d", &x);
	printf("Enter number square of the sum: ");
	scanf("%d", &y);
	if (x<=0 || y<=0)
	{
		printf("No Calculate\n\n");
		for (int m = 0; m <= 10; m++)
		{
			printf("%c", end[m]);
		}
	}
	else
	{
		Result1= Calculatesum(x,Result1);
		Result2 = Calculatesquare(y, Result2);
		printf("sum of the squares = %d\n", Result1);
		printf("square of the sum = %d\n", Result2);
		printf("difference = %d\n\n", Result2 - Result1);
		for (int m = 0; m <= 10; m++)
		{
			printf("%c", end[m]);
		}
	}
		
	

		
	return 0;
}
int Calculatesum(int x, int Result1)
{
	for (int i = 1; i <= x; i++)
	{
		Result1 += i * i ;
	}
	return Result1;
	
}
int Calculatesquare(int y,int Result2)
{
	for (int j = 1; j <= y; j++)
	{
		Result2 += j;
	}
	Result2 = Result2 * Result2;

	return Result2 ;
}