#include <stdio.h>
int main()
{	
	float farenheit = 0;
	float celsius = 0;

	printf("Enter temperature in Farenheit: ");
	scanf("%f", &farenheit);
	celsius = (farenheit - 32)*(0.5556);
	printf("It's conversion in celcius is: %f", celsius);
	return 0;
}