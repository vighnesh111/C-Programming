// unsigned int fact(unsigned int n) - Calculates and returns the factorial of n

#include <stdio.h>
#include <stdlib.h>
unsigned int fact(unsigned int n);
unsigned int n, op = 1, i, flag;

int main()
{
	printf("Enter a number: ");
	scanf("%u",&n);
	flag = fact(n);
	return 0;
}

unsigned int fact(unsigned int n)
{	
	for(i = n; i >= 1; i--)
	{
		op = op*i;
		flag = 1;
	}
	printf("Factorial of the number is: %u", op);
	return flag;
}
