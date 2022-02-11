// int str_find_char(char *str, char *ch) - returns the position where ch is in str and if not present returns -1

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int str_find_char(char *str, char ch);
int i;
char str[20], ch;
int res = -1;

int main() 
{
printf("Enter string : ");
gets(str);
printf("Enter the character to find its position : ");
scanf("%c", &ch);
res = str_find_char(str, ch);
printf("The result is: %d", res);
}

int str_find_char(char *str, char ch)
{  
   for (i = 0; i != 20; i++)
   {
      if(*str == ch) 
      {
         i = i+1;
         res = i;
         printf("The position of character is: %d \n", i);
      }
      str++;
   }
   return res;
}

