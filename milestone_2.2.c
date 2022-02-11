#include <stdio.h>
#include <stdlib.h>
int gcd(int smallno, int largeno);
int largeno, smallno, temp, divisor, output, hcf;
int main()
{	
	printf("Enter first number: ");
	scanf("%d", &largeno);

	printf("Enter second number: ");
	scanf("%d", &smallno);

	output = gcd(smallno, largeno);
    printf("HCF is: %d",output);
	return 0;
}

	int gcd(int smallno, int largeno)
	{
		temp = smallno;
		if(largeno < smallno)
		{
			smallno = largeno;
			largeno = temp;
			divisor = smallno;
		}
		else
		{
    		divisor = smallno;
    	}

    	while(smallno % divisor != 0 && largeno % divisor != 0)
    	{
    		divisor = divisor - 1;
    	}
		hcf = divisor;
    	return hcf;
	}
