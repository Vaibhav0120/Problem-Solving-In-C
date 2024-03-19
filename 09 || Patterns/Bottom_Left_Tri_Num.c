#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<i+1;j++)
        {
            printf("%i ",j);
        }
        printf("\n");
    }
    return 0;
}
/*
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5 
*/
