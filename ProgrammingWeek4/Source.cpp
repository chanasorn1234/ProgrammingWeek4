#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Result = 0;
int Calculate(int x, int y, int Result);
int main()
{
	int x, y,z,p;
	char error[] = { 'N','o','    ', 'C', 'a', 'l', 'c', 'u', 'l','a','t','e' };
	printf("Enter ข้าม: ");
	scanf("%d", &x);
	printf("Enter ชิด: ");
	scanf("%d", &y);
	printf("Enter ฉาก: ");
	scanf("%d", &z);

	if (x <= 0 || y <= 0 || z <= 0)
	{
	
		for (int i = 0; i <= 11; i++)
		{
			printf("%c", error[i]);	
			
		}	
	}
	else
	{
		p = Calculate(x, y, Result);
		if (p == z * z)
		{
			printf("True");
		}
		else
		{
			printf("False");
		}
	}
	printf("\n\n");
	printf("End Program");

	return 0;
}
int Calculate(int x, int y, int Result)
{

	Result = (x * x) + (y * y);
	return Result;
	
}
