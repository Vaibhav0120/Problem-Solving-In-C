#include<stdio.h>

int main()
{   
    int i,n;
    int a[100];
    //INPUT
    printf("Enter N: ");
    scanf("%i",&n);
    //FIRST 2 NUMBERS
    a[0]=0;
    a[1]=1;
    //BUILDING NEXT NUMBERS
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    //PRINT
    for(i=0;i<n;i++)
    {
        printf("%i ",a[i]);
    }
    return 0;
}