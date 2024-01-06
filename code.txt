#include<stdio.h>
struct info
{
    int m1,m2,m3,tm;
};
void main()
{
struct info i1;
printf("Enter marks of first subject");
scanf("%d",&i1.m1);
printf("Enter marks of second subject");
scanf("%d",&i1.m2);
printf("Enter marks of third subject");
scanf("%d",&i1.m3);
i1.tm=i1.m1+i1.m2+i1.m3;
printf("Sum of marks is %d",i1.tm);
}