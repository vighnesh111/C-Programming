// A function to check if a number is odd or even

#include <stdio.h>
#include <stdlib.h>
int oddeven(int num);
int num, flag;

int main()
{
	printf("Enter a number to check if it is ODD or EVEN: ");
	scanf("%u",&num);
	flag = oddeven(num);
	return 0;
}
int oddeven(int num)
{	
	if(num % 2 == 0)
	{
		printf("The number %d is even.", num);
		flag = 0;
	}
	else
	{
		printf("The number %d is odd.", num);
		flag = 1;
	}
	return flag;
}
