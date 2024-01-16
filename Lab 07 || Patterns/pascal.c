#include<stdio.h>
int main()
{
  for(int i = 1; i <= 5; i++)
  {
    for(int j = 5 - i; j > 0; j--)
    {
        printf(" ");
    }
    for(int k = 1; k <= i; k++)
    {
        printf("%d",k);
    }
    for(int k = i - 1; k > 0; k--)
    {
        printf("%d",k);
    }
    printf("\n");
  }
return 0;
}

//      1
//     121
//    12321
//   1234321
//  123454321
