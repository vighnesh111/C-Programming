// int str_length(char *str) - returns the length of the string or -1 on error

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int string_ln(char* str);
char str[20];
int length, count = 0;
int main() 
{
printf("Enter any string : ");
gets(str);
length = string_ln(str);
printf("The length of the given string '%s' is : %d \n", str, length);
}

int string_ln(char* str)
{
   while (*str != '\0') 
   {
      count++;
      str++;
   }
   return count;
}
