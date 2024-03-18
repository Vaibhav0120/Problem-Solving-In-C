#include<stdio.h>

int main()
{
    float c,f;
    printf("enter value of faherenhite ");
    scanf("%f", &f);
    
    c=(f - 32) * 5 / 9;
    
    printf("In Celcius it is: %f", c);
    
    return 0;
}