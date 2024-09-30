#include<stdio.h>
#include<math.h>

int main ()
{
    int num,num2,binary,i,r;

    printf("Enter a Number: ");
    scanf("%d",&num);

    num2 = num;
    binary=0,i=0;

    while(num>0)
    {
        r = num % 10;
        binary = binary + pow(10,i)*r;
        num = num / 2;
        i = i + 1;
    }

    printf("Sum of %d: %d \n",num2,binary);
    return 0;
}