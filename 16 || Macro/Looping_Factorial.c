#include<stdio.h>

#define factorial(r){ int i,f = 1; for(i = 1;i <= n; i++) f = f*i; printf("%d",f);}

void main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    factorial(n);
}