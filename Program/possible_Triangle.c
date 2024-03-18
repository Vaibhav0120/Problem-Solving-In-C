#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c);
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        if(a==b&&a==c&&b==c)
        printf("Equilateral Triangle");
          else if(a==b||a==c||b==c)
          printf("Isosceles Triangle");
          else   
    if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
        printf("Right-angle Triangle");
        else if(a!=b&&a!=c&&b!=c)
        printf("Scalene Triangle");
    }
    else
    printf("Triangle is not possible");
}