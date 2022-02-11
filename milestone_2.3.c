#include <stdio.h>
#include <stdlib.h>
unsigned int value, output, x,  n, count = 0;
unsigned int is_prime(unsigned int x);
int main()
{
	printf("Enter a number to see if its prime or not (1 = PRIME and 0 = COMPOSITE): ");
	scanf("%u",&x);
	value = is_prime(x);
	printf("The number's signal is (1 = PRIME and 0 = COMPOSITE): %u", value);
	return 0;
}
unsigned int is_prime(unsigned int x)	
{
	for (int i = 1; i <= x; i++)
	{
		if (x%i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		value = 1;
	}
	else
	{
		value = 0;
 	}
	return value;
}