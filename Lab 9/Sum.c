#include<stdio.h>

int main()
{
    int n,i,sum=0;
    //INPUT
    printf("Enter N: ");
    scanf("%i",&n);
    int ar[100];
    for(i=0;i<n;i++)
    {
        printf("Enter %ith element: ",i+1);
        scanf("%i",&ar[i]);
    }
    //SUM
    for(i=0;i<n;i++)
    {
        sum = sum + ar[i];
    }
    //PRINT
    printf("Sum: %i",sum);
    
    return 0;
}