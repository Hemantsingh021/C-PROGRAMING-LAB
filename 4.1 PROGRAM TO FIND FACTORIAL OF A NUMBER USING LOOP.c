#include <stdio.h>

int main()
{
    int a,fact=1,b;
    printf("Enter the number of which you want factorial :- ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    printf("%d has the factorial value :- %d",a,fact);
    return 0;
}