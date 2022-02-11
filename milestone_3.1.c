// Create a program to input a set of integers and sort them in ascending or descending order depending on users choice

#include <stdio.h>
#include <stdlib.h>
int option, num[20], n, i, j, temp;
int main()
{	
	printf("Enter total number of inputs:");
	scanf("%d",&n);

	for (i = 0; i < n; i++)
	{
		printf("Enter your desired number:");
		scanf("%d",&num[i]);
	}

	AGAIN:
	printf("Select 0 for ascending order and 1 for descending order: ");
	scanf("%d",&option);

	switch(option)
	{
		case 0 :
		printf("Ascending order for your input is: \n");
		for (i = 0; i < n; i++)
		{
			for (j = i+1; j < n; j++)
			{
				if(num[i] > num[j])
				{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
		printf("%d \n" ,num[i]);
		}
		break;

		case 1 :
		printf("Descending order for your input is: \n");
		for (i = 0; i < n; i++)
		{
			for (j = i+1; j < n; j++)
			{
				if(num[i] < num[j])
				{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
		printf("%d \n" ,num[i]);
		}
		break;

		default: 
		printf("Please provide proper input. \n");
		goto AGAIN;
	}
	return 0;
}


