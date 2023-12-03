#include <stdio.h>

int main()
{
    int n,i;
    double number,max=-99999999.0;
    printf("Enter the number of elements :- ");
    scanf("%d",&n);

    printf("Enter %d number : \n",n);
    for(i=0;i<n;++i)
    {
        printf("Enter number %d: ",i+1);
        scanf("%lf",&number);
    if(number>max)
    {
        max=number;
    }
    }

    printf("Maximum number is :%2.lf\n",max);
    return 0;
}