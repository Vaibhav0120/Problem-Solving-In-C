#include<stdio.h>

#define DivBy3(r) {int i=1; while(i != n) { if(i % 3==0) printf("%d ",i); i++;} }

void main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    DivBy3(n);
}