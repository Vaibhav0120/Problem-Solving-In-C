#include<stdio.h>

int main()
{
    int i,j,k;

    for (i=5;i>0;i--)
    {
        for(k=5-i;k>0;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}

//   *****
//    ****
//     ***
//      **
//       *
