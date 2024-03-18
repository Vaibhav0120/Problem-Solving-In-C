#include<stdio.h>

int main ()
{
    int num,num2,b,i,r;

    printf("Enter a Number: ");
    scanf("%d",&num);

    num2 = num;
    b=0,i=0;

    while(num>0)
    {
        r = num % 10;
        b = b + i;
        num = num / 10;
    }

    printf("Sum of %d: %d \n",num2,b);
    return 0;
}