#include<stdio.h>
int main ()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(j%2==0)
            printf("A");
            else
            printf("B");
        }
        printf("\n");
    }
    return 0;
}
/*
   A
   BA
   ABA
   BABA
   ABABA
*/