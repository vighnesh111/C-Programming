#include <stdio.h>
int main()
{	
	float height = 0;
	float base = 0;
	float area =0;

	printf("Enter the height of the triangle: ");
	scanf("%f", &height);
	printf("Enter the base of the triangle: ");
	scanf("%f", &base);
	area = 0.5 * height * base;
	printf("It's area is: %f", area);
	return 0;
}