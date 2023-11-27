#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,k,kr;

    printf("Enter Sides Of Triangle A,B,C: ");
    scanf("%f %f %f", &a, &b, &c);

    s=a+b+c/2;
    k=s*(s-a)*(s-b)*(s-c);
    kr=sqrt(s);

    printf("Area Of Triangle is %f", kr);
  
    return 0;
}