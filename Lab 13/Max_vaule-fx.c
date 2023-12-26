#include<stdio.h>

int findMax (int *p,int n);

int main()
{
    int i,n,max;

    printf("Enter the value of N:");
    scanf("%i",&n);

    int a [100];

    for(i=0;i<n;i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&a[i]);
    }

    max = findMax(a,n);

    printf("Maximum = %i",max);

    return 0;
}

int findMax(int a[],int n)
{
    int M,i;
    M = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>M)
        {
            M = a[i];
        }
    }
    return M;
}