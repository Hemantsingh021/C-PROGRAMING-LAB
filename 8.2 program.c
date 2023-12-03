#include <stdio.h>
#include <string.h>
void main()
{
   char str[100];
   int i,j,ispalindrome = 1;
   printf("Enter the string :- ");
   gets(str);
   for(i=0,j=strlen(str)-i;i<j;j--)
   {
    if(str[i]!=str[j])
    {
        ispalindrome = 0;
        break;
    }
   }
   if(ispalindrome=1)
    {
        printf("The entered string is pallindrome.\n");
    }
    else
    printf("Entered string is not a pallindrome.\n");
}