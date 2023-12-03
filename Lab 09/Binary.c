#include<stdio.h>
#include<math.h>

int main()
{
    int n=0,r=0,b=0,i=0;
    printf("Enter Number: ");
    scanf("%i",&n);

    while(n>0)
    {  
         r=0;
        r=n%2;
        b=b+pow(10,i)*r;
        n=n/2;
        i++;
    }

    printf("Binary: %i",b);
    return 0;
}