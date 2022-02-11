// Create a program to input a set of integers and then search the array to see if a particular integer exists in the array
#include <stdio.h>
#include <stdlib.h>
int search[20], num[20], n, m, i, j, temp;
int main()
{	
	printf("Enter total number of inputs (search array):");
	scanf("%d",&n);

	for (i = 0; i < n; i++)
	{
		printf("Enter your desired number:");
		scanf("%d",&search[i]);
	}
	
	printf("Enter total number of inputs to match with array:");
	scanf("%d",&m);

	for (j = 0; j < m; j++)
	{
		printf("Enter your desired number:");
		scanf("%d",&num[j]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (num[j] == search[i])
			{
				printf("%d \n", num[j]);
			}
		}
	}

	return 0;
}



















