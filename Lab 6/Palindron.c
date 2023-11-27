//not working correct- check flow chart in copy
#include<stdio.h>

int main()
{
    int n,s,r,t;

    printf("Enter N: ");
    scanf("%i",&n);

    t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }

    if(t==s)
    printf("It is Palindron");
    else
    printf("It is not Palindron");

    return 0;
}