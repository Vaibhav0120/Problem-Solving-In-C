#include<stdio.h>

int factorial (int n);

void main()
{
    int n,fac;

    printf("Enter the value of N:");
    scanf("%i",&n);

    fac=factorial(n);

    printf("Factorial = %i",fac);
}

int factorial(int n)
{
    if(n==1)
    return 1;
    else
        return (n*factorial(n-1));
}