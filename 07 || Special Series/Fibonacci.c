#include<stdio.h>

int main()
{
    int n,first = 0,second = 1,i = 2,next;

    printf("Enter N: ");
    scanf("%i",&n);

    printf("Fibonacii Series: %i %i",first,second);

    while(i<=n)
    {
        next = first + second;
        first = second;
        second = next;
        printf("%i ",next);
        i++;
    }
    return 0;
}