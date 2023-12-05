#include<stdio.h>

int main()
{
    int l,i,m,n,h,k;
    int a[100];

    printf("Enter the value of N:");
    scanf("%i",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&a[i]);
    }

    printf("Enter the value of Elt:");
    scanf("%i",&k);

    l=0;
    h=n-1;
    m=(l-h)/2;

    while (l<=h)
    {
        if(a[m]<k)
        {
            l=m+1;
        }
        else if (a[m]==k)
        {
            printf("ELT found");
            break;
        }
        else
        {
            h=m-1;
        }
        m=(l+h)/2;
    }
    

    if(l<h)
        printf("Elt not found");
    else
        printf("ELT found");

    return 0;
}