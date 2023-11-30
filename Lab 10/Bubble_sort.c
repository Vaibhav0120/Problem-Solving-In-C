#include<stdio.h>

int main()
{
    int i,j,n,t;
    printf("Enter N:");
    scanf("%i",&n);

    int a[100];

    for(i=0;i<n;i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf(" [%i] ",a[i]);
    }

    return 0;
}