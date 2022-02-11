#include <stdio.h>
#include <stdlib.h>
double power(double x, int n);
    double x = 0, y = 0;
    int n = 0, temp, tempo, i = 1;
int main()
{	

	printf("Enter the base of the number (i.e.: x): ");
	scanf("%lf", &x);

	printf("Enter the power for the base (i.e.: n): ");
	scanf("%d", &n);

	y=power(x,n);
	printf("Output is: %lf",y);
	return 0;
}
double power(double x, int n)
{	
	int temp = x;
	while(i < n)
	{
		y = temp*x;
		tempo = y;
		temp = tempo;
		i++;
	}
	return y;
}