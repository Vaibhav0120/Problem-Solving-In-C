#include<stdio.h>

int main()
{
    int i,f,n,elt,loc;
    printf("Enter N:");
    scanf("%i",&n);

    int a[100];

    for(i = 0; i < n; i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&a[i]);
    }

    printf("Enter ELT:");
    scanf("%i",&elt);

    for(i = 0; i < n; i++)
    {
        if( a[i] == elt )
        {
            f = 1;
            loc = i;
            break;
        }
    }

    if( f == 1 )
        printf("Found %i at location %i",elt,loc);
    else
        printf("%i not found in array",elt);

    return 0;
}