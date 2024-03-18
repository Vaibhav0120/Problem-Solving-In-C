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
            printf("%d is present at location %d",elt,loc);
        }
    }

    if( f > 0 )
        printf("%d is present %d times in the array.",elt,loc);
    else
        printf("%d is not present in the array.",elt);

    return 0;
}