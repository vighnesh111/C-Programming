// int str_find_substring(char *str1, char *str2) - returns the position where str2 is in str1 and if not present returns -1. 
// E.g. if str1 is "Hello World" and str2 is "World" then the function should return 6 and if str2 is "eat" then it should return -1

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int str_find_substring(char *str1, char *str2);
int i, j = 0, k = 0;
char str1[20], str2[20], strres[20];
int res = 0;

int main() 
{
   printf("Enter string 1: ");
   gets(str1);
   printf("Enter string 2 for finding its initial position: ");
   gets(str2);
   res = str_find_substring(str1, str2);
   printf("The result is: %d", res);
}

int str_find_substring(char *str1, char *str2)
{  
   if(*str1 != *str2)
   {
   str1 ++;      
   }
   else if(*str1 == *str2)
   {
      str1 ++;
      str2 ++; 

      if(*str1 == *str2)
      {

      printf("Match found")      
      }
   }

   return res;
}



