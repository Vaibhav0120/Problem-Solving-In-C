#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the month and year: ");
    scanf("%i %i", a, b);

    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    {
        printf("maximum day in month is 31");
    }
   else if (a==4 || a==6 || a==9 || a==11)
    {
        printf("maximum day in month is 30");
    }
   else if (b%4==0 && b/100!=0 || b/400==0)
    {
        printf("maximum day in month is 29");
    }
   else
    {
        printf("maximum day in month is 28");   
    }
return 0;
}