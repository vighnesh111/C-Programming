// Function for finding and printing all factors of a number

#include <stdio.h>
#include <stdlib.h>
int numfact(int factor);
int num, factor, i, half;

int main()
{
	printf("Enter a number to see its all possible factors: ");
	scanf("%u",&num);
	factor = numfact(factor);
	return 0;
}
int numfact(int factor)
{
	for (int i = 1; i <= num; i++)
	{
		if (num%i == 0)
		{
			printf("Factor: %d \n", i);
		}
	}
	return factor;
}

