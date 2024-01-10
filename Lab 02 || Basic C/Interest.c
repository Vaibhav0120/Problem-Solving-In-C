#include<stdio.h>

int main ()
{
    float p,t,r,s;

    printf("Enter P R T:  ");
    scanf("%f %f %f", &p, &r, &t);
    s=(p * r * t) / 100;

    printf("simple interest is: %f\n", s);

    return 0;
}