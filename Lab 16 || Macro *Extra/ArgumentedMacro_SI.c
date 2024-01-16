//Simple Interest

#include<stdio.h>

#define SI(p,r,t) {float si; si = (p * r * t)/100; printf("%f",si);}

void main()
{
    int p,r,t;
    printf("Enter Principle: ");
    scanf("%d",&p);
    printf("Enter Rate: ");
    scanf("%d",&r);
    printf("Enter Time: ");
    scanf("%d",&t);
    SI(p,r,t);
}