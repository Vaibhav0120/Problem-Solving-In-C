#include<stdio.h>

int sum(int n);

int main()
{
    int n;

    printf("Enter the value of N:");
    scanf("%i", &n);

    int result = sum(n);

    printf("Sum of digits: %d\n", result);

    return 0;
}

int sum(int n)
{
    int r;
    r = n % 10;
    if (n == 0)
        return 0;
    else
        return (r + sum(n / 10));
}
