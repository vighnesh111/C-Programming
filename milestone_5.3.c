// int str_compare(char *str1, char *str2) - if str1 is less than str2 the function should return -1 if str1 is greater than str2 it should return 1 and if both are equal then return 0

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int str_compare(char *str1, char *str2);
char str1[20], str2[20];
int length, res = 0;

int main() 
{
printf("Enter string 1 : ");
gets(str1);
printf("Enter string 2 : ");
gets(str2);
res = str_compare(str1, str2);
printf("The result is: %d", res);
}

int str_compare(char *str1, char *str2)
{
   if(*str2 == *str1) 
   {
      res = 0;
   }
   else if(*str2 <= *str1) 
   {
      res = 1;
   }
   else if(*str2 >= *str1) 
   {
      res = -1;
   }
   return res;
}