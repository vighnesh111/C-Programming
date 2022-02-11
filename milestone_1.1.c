#include <stdio.h>
int main()
{	
	float pound = 0;
	float kilogram = 0;

	printf("Enter your weight in pounds:");
	scanf("%f", &pound);
	kilogram = 0.453592 * pound;
	printf("Your weight in kilograms is: %f", kilogram);
	return 0;
}