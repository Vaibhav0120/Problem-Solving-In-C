#include<stdio.h>

int main()
{
    int n,pos,i;
    //INPUT
    printf("Enter N: ");
    scanf("%i",&n);
    int ar[100];
    for(i = 0; i < n; i++)
    {
        printf("Enter %ith element: ",i+1);
        scanf("%i",&ar[i]);
    }
    printf("Enter POS: ");
    scanf("%i",&pos);
    pos--;
    //SHIFT
    for(i = pos; i < n; i++)
    {
        ar[i] = ar[i+1];
    }
    //PRINT
    for(i = 0; i < n-1; i++)
    {
        printf(" [%i] ",ar[i]);
    }
    return 0;
}