#include <stdio.h>
int main()
{	
	float radius = 0;
	float area = 0;

	printf("Enter radius of the circle: ");
	scanf("%f", &radius);
	area = 3.1416*radius*radius;
	printf("It's area is: %f", area);
	return 0;
}