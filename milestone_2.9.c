// A function to get LCM of 3 numbers

#include <stdio.h>
#include <stdlib.h>
int LCM(int num1, int num2, int num3);
int num1, num2, num3, flag, d = 2;

int main()
{
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("Enter third number: ");
	scanf("%d",&num3);
	flag = LCM(num1, num2, num3);
	return 0;
}
int LCM(int num1, int num2, int num3)
{	
	for(d = 2; num1 || num2 || num3 > 0; d++)
	{
		if(num1%d == 0 && num2%d == 0 && num3%d == 0)
		{
			num1 = num1 / d;
			num2 = num2 / d;
			num3 = num3 / d;
			printf("%d", d);
			flag = 1;
		}
		else if(num1%d == 0 && num2%d == 0)
		{
			num1 = num1 / d;
			num2 = num2 / d; 
			printf("%d ", d);
			flag = 1;
		}
		else if(num2%d == 0 && num3%d == 0)
		{
			num2 = num2 / d;
			num3 = num3 / d;		
			printf("%d", d);
			flag = 1;
		}
		else if(num1%d == 0 && num3%d == 0)
		{
			num1 = num1 / d;
			num3 = num3 / d; 		
			printf("%d", d);
			flag = 1;
		}
		else if(num1%d == 0)
		{
			num1 = num1 / d;
			printf("%d", d);
			flag = 1;
		}
		else if(num2%d == 0)
		{
			num2 = num2 / d;
			printf("%d", d);
			flag = 1;
		}
		else if(num3%d == 0)
		{
			num3 = num3 / d;
			printf("%d", d);
			flag = 1;
		}
	}
	return flag;
}
