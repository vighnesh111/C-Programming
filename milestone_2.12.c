// nPr - Combinations

#include <stdio.h>
#include <stdlib.h>
unsigned int factn(unsigned int n);
unsigned int factdnr(unsigned int nr);
unsigned int n, r, nr, i, op1 = 1, op2 = 1, npr;

int main()
{
	printf("Enter value of n (nPr):");
	scanf("%u",&n);
	printf("Enter value of r (nPr):");
	scanf("%u",&r);
	nr = n-r;
    op1 = factn(n);
    op2 = factdnr(nr);
	printf("Factorial of n is: %u \n", op1);
	printf("Factorial of n-r is: %u \n", op2);
	npr = (op1)/(op2);
	printf("nPr is: %u", npr);
	return 0;
}

unsigned int factn(unsigned int n)
{	
	for(i = n; i >= 1; i--)
	{
		op1 = op1*i;
	}
	return op1;
}
unsigned int factdnr(unsigned int nr)
{	
	for(i = nr; i >= 1; i--)
	{
		op2 = op2*i;
	}
	return op2;
}