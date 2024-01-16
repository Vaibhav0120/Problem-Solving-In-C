#include<stdio.h>

int fact(int n);
void main()
{
    int i,f = 1,sum = 0;

    for(i = 1;i <= 7; i++)
        sum = sum + ( i / fact(i) );

    printf("Sum: %i\n", sum);
}

int fact(int n)
{
    int i , f = 1;
    
    for(i = 1;i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

//    O/P -> 1/1! + 2/2! + 3/3! + 4/4! + 5/5! + 6/6! + 7/7! = 2