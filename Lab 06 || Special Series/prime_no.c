#include<stdio.h>

int main ()
{
    int n,c = 1,i = 2;

    printf("Enter N: ");
    scanf("%i",&n);

    i=2,c=0;
        while (i<n/2)
        {
            if(n%i==0)
            {
                c=1;
                break;
            }
            else
            i++;
        }

    if(c==1)
        printf("%i is NOT a Prime No",n);
    else
        printf("%i is a Prime No",n);
    return 0;
}