// Function for finding and printing all prime factors of a number

#include <stdio.h>
#include <stdlib.h>
int primefact(int num);
int num, n, value;

int main()
{
	printf("Enter a number to see its all possible prime factors: ");
	scanf("%d",&num);
	value = primefact(num);
	return 0;
}

int primefact(int num)
{	
	for(n = 2; num > 1; n++)
	{
		while(num % n == 0)
		{
			printf("Prime Factor: %d \n",n);
			num = num / n;
			value = 1;
		}
	}
	return value;
}


