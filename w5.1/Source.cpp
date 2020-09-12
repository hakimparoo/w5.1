#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void hourglass(int x)
{
	for (int i = -(x - 1);i <= (x - 1);i++)
	{
		for (int j = (x - 1);j >= -(x - 1);j--)
		{
			if (abs(j) - abs(i) <= 0)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
int main()
{
	int x;
	printf("Enter number => ");
	scanf("%d", &x);
	hourglass(x);
	return 0;
}