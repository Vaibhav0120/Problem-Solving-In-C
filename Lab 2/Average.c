#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;

    printf("enter the value of a,b,c,d,e: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    f = (a + b + c + d + e) / 5;

    printf("the average of the number is %d", f);

    return 0;
}