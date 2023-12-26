#include<stdio.h>

int Search (int *p,int n,int elt);

int main()
{
    int i,n,elt,result;

    printf("Enter the value of N:");
    scanf("%i",&n);

    int a [100];

    for(i=0;i<n;i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&a[i]);
    }
    
    printf("Enter the value of ELT:");
    scanf("%i",&elt);

    result = Search(&a,n,elt);

    if(result != 0)
    printf("%i found",elt);
    else
    printf("%i Not Found",elt);

    return 0;
}

int Search(int *p,int n,int elt)
{
    int i,result;
    result = 0;
    for(i=0;i<n;i++)
    {
        p++;
        if(*p == elt)
        {
            result++;
            break;
        }
    }
    return result;
}