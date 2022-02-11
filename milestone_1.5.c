#include <stdio.h>
int main()
{	
	float length = 0;
	float breadth = 0;
	float area =0;

	printf("Enter length of the rectangle: ");
	scanf("%f", &length);
	printf("Enter breadth of the rectangle: ");
	scanf("%f", &breadth);
	area = length * breadth;
	printf("It's area is: %f", area);
	return 0;
}