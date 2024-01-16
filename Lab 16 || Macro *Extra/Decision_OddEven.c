#include<stdio.h>

#define evenodd(r){ if (r % 2 == 0) printf("Even\n"); else printf("odd\n");}

void main()
{
    int r;
    printf("Enter N: ");
    scanf("%d",&r);
    evenodd(r);
}