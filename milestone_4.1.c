#include <stdio.h>
#include <stdlib.h>
int option, num[20], n, i, j, k, temp, option2, numsearch, remnum, ennum, pos, found;
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
	printf("Add an element to the Array the application should not allow the user to enter the same number twice (PRESS: 1): \n"); 
	printf("Search if an element exists in the array (PRESS: 2): \n");
	printf("Remove an element from the array (PRESS: 3): \n"); 
	printf("Sort the array (PRESS: 4): \n");
	printf("Print all elements in the array (PRESS: 5): \n");
	printf("EXIT (PRESS: 6): \n");
	printf("Select option: ");
	scanf("%d",&option);

	switch(option)
	{
///////////////////////////////////////////////////////////////////////////
		case 1 :
		CASE1L:
		printf("Enter a number to add in the array (no repeated number allowed): ");
		scanf("%d",&ennum);	
		for (i = 0; i < n; i++)
		{
			if(ennum == num[i])
			{
			printf("Number exists. Try another number \n");
			goto CASE1L;
			}
		}
		num[n] = ennum;
		printf("The array after entering new number: \n");
		for (i = 0; i <= n; i++)
		{
		printf("%d \n" ,num[i]);
		}
		break;
///////////////////////////////////////////////////////////////////////////
		case 2 :
		printf("Enter a number to search:");
		scanf("%d",&numsearch);
		for (i = 0; i < n; i++)
		{
			if(numsearch == num[i])
			{
			printf("The number exists \n");
			goto JMP;
			break;
			}	
		}
		printf("The number does not exists \n");
		JMP:
		break;
///////////////////////////////////////////////////////////////////////////
		case 3 :
		LCASE3:
		printf("Enter a number to remove from the array: ");
		scanf("%d",&remnum);
		for (i = 0; i < n; i++)
		{
			if (num[i] == remnum)
			{
			found = 1;
			pos = i;
			break;
			}
		}
		if (found == 1)
		{
			for (i = pos; i < n-1; i++)
			{
			num[i] = num[i+1];
			}
			printf("The array formed after removing that element: \n");
			for (i = 0; i < n-1; i++)
			{
			printf("%d \n" ,num[i]);
			}
		}
		else
		{
		printf("Please enter an existing element. \n");
		}
		goto LCASE3;
		break;
///////////////////////////////////////////////////////////////////////////
		case 4 :
		AGAIN1:
		printf("Select 'A' for ascending order and 'B' for descending order: ");
		scanf("%d",&option2);

		switch(option2)
		{
		case 'A' :
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
		case 'B' :
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
		goto AGAIN1;
		}
		break;
///////////////////////////////////////////////////////////////////////////
		case 5 :
		for (i = 0; i < n; i++)
		{
		printf("%d \n" ,num[i]);
		}
		break;
///////////////////////////////////////////////////////////////////////////
		case 6 :
		break;
///////////////////////////////////////////////////////////////////////////
		default: 
		printf("Please provide proper input. \n");
		goto AGAIN;
///////////////////////////////////////////////////////////////////////////
	}
	return 0;
}


