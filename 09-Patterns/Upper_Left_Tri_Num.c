#include<stdio.h>

int main()
{
  int i,j,k;

  for(i=5;;i>0;i--)
  {
     for(j=1;j<=i;j++)
    {
       printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}

/*
1 2 3 4 5
1 2 3 4
1 2 3 
1 2
1
*/
