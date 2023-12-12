#include<stdio.h>

int fibonacci(int n);

int main()
{
    int n,pos;

    printf("Enter the value of n:");
    scanf("%i",&n);

    pos = fibonacci(n);

    printf("%i is at pos %i in fibonacci series",n,pos);
}

int fibonacci(int n)
{
    if(n==1)
        return (0);
    else if (n==2)
        return (1);
    else
        return (fibonacci(n-1) + fibonacci(n-2));
}