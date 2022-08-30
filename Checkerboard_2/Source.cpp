//#define_CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void board()
{
	int i;
	if (i % 2 == 0)
	{
		printf("*");
	}
	else
	{
		printf(" ");
	}
}
int main()
{
	int n, i, j;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j % 2 == 0 )
			{
				board();
			}
			else 
			{
				board();
			}
		}printf("\n");
	}
}