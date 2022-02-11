// void fibonacci(int n) - Prints the first n fibonacci numbers

#include <stdio.h>
#include <stdlib.h>
int n, a = -1, b = 1, c, i;
void fibonacci(int n);
int main()
{
	printf("Enter nth term of the series:");
	scanf("%u",&n);
	fibonacci(n);
	return 0;
}
void fibonacci(int n)
{
	for(i=1; i <= n; i++)
	{
		c = a+b;
		printf("%d \n", c);
		a = b;
		b = c;	
	}
	return;
}
