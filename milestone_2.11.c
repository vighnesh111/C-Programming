// nCr - Combinations

#include <stdio.h>
#include <stdlib.h>
unsigned int factn(unsigned int n);
unsigned int factd(unsigned int r);
unsigned int factdnr(unsigned int nr);
unsigned int n, r, nr, i, op1 = 1, op2 = 1, op3 = 1, ncr;

int main()
{
	printf("Enter value of n (nCr):");
	scanf("%u",&n);
	printf("Enter value of r (nCr):");
	scanf("%u",&r);
	nr = n-r;
    op1 = factn(n);
    op2 = factd(r);
    op3 = factdnr(nr);
	printf("Factorial of n is: %u \n", op1);
	printf("Factorial of r is: %u \n", op2);
	printf("Factorial of n-r is: %u \n", op3);
	ncr = (op1)/((op2)*(op3));
	printf("nCr is: %u", ncr);
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
unsigned int factd(unsigned int r)
{	
	for(i = r; i >= 1; i--)
	{
		op2 = op2*i;
	}
	return op2;
}
unsigned int factdnr(unsigned int nr)
{	
	for(i = nr; i >= 1; i--)
	{
		op3 = op3*i;
	}
	return op3;
}