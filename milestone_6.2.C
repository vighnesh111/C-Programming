#include <stdio.h>
#include <stdlib.h>

char** str_tokenize(char* , char);
int words = 0;

int main()
{
	char str[50],token;
	int i = 0;
	printf("Enter the string: ");
	gets(str);
	printf("\nEnter the token character: ");
	scanf("%c",&token);
	char** finAns = str_tokenize(str, token);
	//printf("\n%s",*finAns);
	for(i = 0;i < words;i++)
		printf("%s\n",finAns[i]);
	return 0;
}

char** str_tokenize(char *str, char c)
{
	int i = 0;
	char** value = (char** )malloc(sizeof(char*)*50);
	char *temp = (char *)malloc(sizeof(char) * 50);
	int index = 0;
	while(*str != '\0')
	{
		//printf("Character: %c\n",*str);
		if(*str == c)
		{
			//printf("Character encountered: %c\n",c);
			//printf("String obtained: %s\n",temp);
			value[words] = (char *)malloc(sizeof(char) * index);
			for(i = 0;i < index; i++)
				{
				//printf("What: %c\n",temp[i]);
				value[words][i] = temp[i];
				
				}
			//printf("Word is: %s\n",value[words]);
			words++;
			index = 0;
			free(temp);
			temp = (char *)malloc(sizeof(char)*50);
		}
		else
			temp[index++] = *str;
		str++;
	}
	//printf("Where did I fucking reached\n");
	//printf("Temp value: %s\n",temp);
	//printf("Index value: %d\n",index);
	//printf("Value of words is: %d\n",words);
	value[words] = (char *)malloc(sizeof(char) * index);
	for(i = 0;i < index;i++)
	{
		//printf("Temp: %c\n",temp[i]);
		value[words][i] = temp[i];
	}
	//printf("What the hell yaar\n");
	words++;
	free(temp);
	//printf("What the hell yaar\n");
	//for(i = 0;i < words;i++)
	//	printf("%s\n",value[i]);
	return value;
}