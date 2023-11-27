#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter A,B,C: ");
    scanf("%i %i %i", &a, &b, &c);

    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
            {
                printf("Largest-%i   Middle-%i   Snallest-%i",a,b,c);
            }
            else
            {
                printf("Largest-%i   Middle-%i   Smallest-%i",a,c,b);
            }

        }
        else
        {
             if(a>b)
            {
                printf("Largest-%i   Middle-%i   Smallest-%i",c,a,b);
            }
            else
            {
                printf("Largest-%i   Middle-%i   Smallest-%i",c,b,a);
            }
        }

    }
    else
    {
        if(b>c)
        {
            if(a>c)
            {
                printf("Largest-%i   Middle-%i   Smallest-%i",b,a,c);
            }
            else
            {
                printf("Largest-%i   Middle-%i   Smallest-%i",b,c,a);
            }
        }
        else
        {
            if(a>b)
            {
                printf("Largest-%i   Middle-%i   Smallest-%i",c,a,b);
            }
            else
            {
                printf("Largest-%i   Middle-%i   Smallest-%i",c,b,a);
            }
        }
    }

    return 0;
}
