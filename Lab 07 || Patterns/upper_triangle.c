#include<stdio.h>

int main()
{
    int i,j,k;

    for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%i",j);
        }
        printf("\n");
        for(k=i;k<=5;k++)
        {
            printf(" ");
        }
    }
    return 0;
}

//   12345
//    1234
//     123
//      12
//       1
