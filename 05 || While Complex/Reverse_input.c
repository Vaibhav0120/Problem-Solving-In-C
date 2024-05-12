#include<stdio.h>

int main ()
{
    int num,num2,sum,remain;

    printf("Enter a Number: ");
    scanf("%d",&num);

    num2 = num;
    sum=0;

    while(num>0)
    {
        remain = num % 10;
        sum = sum * 10 + remain;
        num = num / 10;
    }

    printf("Reverse of %d: %d \n",num2,sum);
    return 0;
}