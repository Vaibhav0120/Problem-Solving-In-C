#include<stdio.h>

int main()
{
    int i,j,k,n=0;

    for (i=5;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        for(k=0;k<=n*2;k++)
        {
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        n++;
        k=0;
        printf("\n");
    }
return 0;
}
/*
   ***** *****
   ****   ****
   ***     ***
   **       **
   *         *
*/
