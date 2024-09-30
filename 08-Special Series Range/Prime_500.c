#include<stdio.h>

int main()
{
    int i=2,c=1;

    for(int n = 1;n < 500;n++)
    {
        i=2,c=1;
        while (i<n/2)
        {
            if(n%i==0)
            {
                c=0;
                break;
            }
            else
            i++;
        }
        if(c==0)
            printf("");
        else
            printf("Prime no:%d\n",n);    
    }
    return 0;
}