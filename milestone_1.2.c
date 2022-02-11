#include <stdio.h>
int main()
{	
	float inches = 0;
	float centimeter = 0;

	printf("Enter length in inches: ");
	scanf("%f", &inches);
	centimeter = 2.54 * inches;
	printf("It's conversion into centimeters is: %f", centimeter);
	return 0;
}