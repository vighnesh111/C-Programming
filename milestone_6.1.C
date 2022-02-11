#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int str_copy(char *str1, char *str2);
char str1[20], str2[20];
int length, count = -1;

int main() 
{
printf("Enter any string : ");
gets(str2);
count = str_copy(str1, str2);
if(count != -1)
	printf("The copied string is as follows: %s", str1);
else
	printf("Failure");
return 0;
}

int str_copy(char *str1, char *str2)
{
   while (*str2 != '\0')
   {
      *str1 = *str2;
      str1++;
      str2++;
   }
   count++;
   return count;
}