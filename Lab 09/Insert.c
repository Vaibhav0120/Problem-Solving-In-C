#include<stdio.h>

int main()
{
    int n,elt,pos,i;
    //INPUT
    printf("Enter N: ");
    scanf("%i",&n);
    int ar[100];
    for(i=0;i<n;i++)
    {
        printf("Enter %ith element: ",i+1);
        scanf("%i",&ar[i]);
    }
    printf("Enter ELT: ");
    scanf("%i",&elt);
    printf("Enter POS: ");
    scanf("%i",&pos);
    pos--;
    i=n;
    //SHIFT
    for(i=n;i>pos;i--)
    {
        ar[i]=ar[i-1];
    }
    //PUTTING ELEMENT AT POSITION
    ar[i]=elt;
    //PRINT
    for(i=0;i<n+1;i++)
    {
        printf(" [%i] ",ar[i]);
    }
    return 0;
}