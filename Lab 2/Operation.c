#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;

    printf("enter the value of a: ");
    scanf("%d", &a);

    printf("enter the value of b: ");
    scanf("%d", &b);

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;

    printf("addition = %d, subtraction = %d, multiplication = %d, division = %d", c, d, e, f);

    return 0;
}