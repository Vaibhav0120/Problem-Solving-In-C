#include <stdio.h>

int fibonacci(int pos);

void main()
{
    int pos,number;
    printf("Enter POS:");
    scanf("%i",&pos);

    number = fibonacci(pos);

    printf("%i is at postion %i in Fibonacci Series",number,pos);
}

int fibonacci(int n)
{
    if(n==1)
        return 0;
    else if (n==2)
        return 1;
    else
        return(fibonacci(n-1)+fibonacci(n-2));
}