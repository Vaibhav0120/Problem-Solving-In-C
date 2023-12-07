#include<stdio.h>

int main()
{
    int i,j,k,n,m;

    //INPUT FIRST ARRAY

    printf("Enter N:");
    scanf("%i",&n);

    int a[100];
   
    for(i=0;i<n;i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&a[i]);
    }
    

    //INPUT SECOND ARRAY
    
    printf("Enter M:");
    scanf("%i",&m);

    int b[100];

    for(j=0;j<m;j++)
    {
        printf("Enter %ith element:",j);
        scanf("%i",&b[j]);
    }

    //START THIRD(RESULT) ARRAY
    int c[100];

    //MERGING START
    i=0,j=0,k=0;
    while(k < m+n)
    {
        //WHEN ANY OF THE ARRAY IS NOT COMPLETELY USED (NORMAL/START CASE)
        while((i<n) && (j<m))
        {
            //IF ELT OF A IS SMALLER SEND IT AT C
            if(a[i] < b[j])
            {
                c[k]=a[i];
                i++;
                k++;
            }
            
            //IF ELT OF B IS SMALLER SEND IT AT C
            else if(a[i] > b[j])
            {
            c[k] = b[j];
            j++;
            k++;
            }

            //IF BOTH ELT ARE EQUAL SEND BOTH TO C
            else if(a[i] == b[j])
            {
                c[k] = a[i];
                i++;
                k++;
                c[k] = b[j];
                j++;
                k++;
            }
        }

        //WHEN ANY OF THE ARRAY IS COMPLETELY USED
        //WHEN A IS COMPLETELY USED
        if(i==n)
        {
            c[k]=b[j];
            j++;
            k++;
        }
        //WHEN B IS COMPLETELY USED
        else
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }

    //PRINTING THE MERGED ARRAY
    for(k=0;k<n+m;k++)
    {
        printf(" [%i] ",c[k]);
    }

    return 0;
}