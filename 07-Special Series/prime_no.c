#include<stdio.h>

int main ()
{
    int n,c = 1,i = 2;

    printf("Enter N: ");
    scanf("%i",&n);

        while (i < n/2)
        {
            if(n % i == 0)
            {
                c = 0;
                break;
            }
            else
            i++;
        }

    if(c == 0)
        printf("%i is NOT a Prime No",n);
    else
        printf("%i is a Prime No",n);
    return 0;
}