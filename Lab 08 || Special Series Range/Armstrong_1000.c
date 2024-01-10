#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,s,c,r,k;

    for(k = 1;k<=1000;k++)
    {
        n=k;
        t=n;
        s=0;
        c=0;
        r=0;
        while(n>0)
        {
            c=c+1;
            n=n/10;
        }
        n=t;
        while (n>0)
        {
            r=n%10;
            s=s+pow(r,c);
            n=n/10;
        }
        if(t==s)
        printf("Armstrong no:%i\n",t);
        else
        printf("");        
    }
return 0;    
}