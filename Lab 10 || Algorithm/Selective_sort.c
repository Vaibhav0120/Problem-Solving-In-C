#include<stdio.h>

int main()
{
    int i,j,n,t;
    printf("Enter N:");
    scanf("%i",&n);

    int a[100];

    for(i = 0; i < n; i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&a[i]);
    }

    /*  Sorting technique
        7 3 2 9 5 2  --> 3 7 2 9 5 2 --> 2 7 3 9 5 2 --> 2 7 3 9 5 2  
        ^ ^              ^   ^           ^     ^         ^       ^
    */
    for(i = 0; i < n; i++)
    {
        for(j = i+1 ; j < n; j++)
        {
            if( a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf(" [%i] ",a[i]);
    }

    return 0;
}