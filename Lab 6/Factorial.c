#include<stdio.h>

void main()
{
    int f,n;

    printf("Enter N: ");
    scanf("%i",&n);

    f=1;
    while(n>0)
    {
        f=f*n;
        n--;
    }
    printf("%i",f);
}