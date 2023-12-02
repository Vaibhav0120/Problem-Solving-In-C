#include<stdio.h>

int main()
{
    int i,j,k,n,m;

    //INPUT FIRST ARRAY
    /*
    printf("Enter N:");
    scanf("%i",&n);

    int a[100];
   
    for(i=0;i<n;i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&a[i]);
    }
    */
    int a[100] = {8,14,25,38,48,68,77,82,91};
    n=9;

    //INPUT SECOND ARRAY
    /*
    printf("Enter M:");
    scanf("%i",&m);

    int b[100];

    for(j=0;j<m;j++)
    {
        printf("Enter %ith element:",j);
        scanf("%i",&b[i]);
    }
    */
    
    int b[100]= {6,9,11,22,28,38,61,73,82,87,91};
    m=11;

    //START THIRD(RESULT) ARRAY
    int c[100];

    //MERGING START
    i=0,j=0;
    for(k=0;k<n+m;k++)
    {
        //IF ANY ARRAY IS COMPLETED
        if(i==n || j==m)
        {
            //IF FIRST ARRAY IS COMPLETE - TRANSFER ALL SECOND ARRAY ELEMENT ONE BY ONE
            if(i==n)
            {
                c[k]=b[j];
                j++;
            }
            //IF SECOND ARRAY IS COMPLETE - TRANSFER ALL FIRST ARRAY ELEMENT ONE BY ONE
            else
            {
                c[k]=a[i];
                i++;
            }
        }
        //IF ELEMENTS ARE LEFT IN BOTH ARRAY
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else if (a[i]>b[j])
        {
            c[k]=b[j];
            j++;
        }
        else
        {
            c[k]=a[i];
            i++;
            k++;
            c[k]=b[j];
            j++;
        }
        
    }

    for(k=0;k<n+m;k++)
    {
        printf(" [%i] ",c[k]);
    }

    return 0;
}