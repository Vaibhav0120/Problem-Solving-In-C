#include<stdio.h>

int main()
{
    int i,f=1,sum = 0;

    for(i=1;i<=7;i++)
    {
        f=f*i;
        sum = sum + (i/f);
    }

    printf("Sum: %i\n", sum);
    return 0;
}

//    O/P -> 1/1! + 2/2! + 3/3! + 4/4! + 5/5! + 6/6! + 7/7! = 2