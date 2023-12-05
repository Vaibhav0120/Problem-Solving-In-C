#include<stdio.h>

int main()
{
    int head,i,elt,last,mid,n;
    int arr[100];

    //INPUT ARRAY

    printf("Enter the value of N:");
    scanf("%i",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",&arr[i]);
    }

    //INPUT ELT TO CHECK

    printf("Enter the value of ELT:");
    scanf("%i",&elt);

    //SETTING ARRAY AS - Eg:[L,0,0,0,M,0,0,0,H]

    last=0;
    head=n-1;
    mid=(last-head)/2;

    while (last<=head)
    {
        //ARRAY - [0,0,0,0,L,0,M,0,H]     (if ELT is between previous last and mid)
        if(arr[mid]<elt)
        {
            last=mid+1;
        }

        //ARRAY - [L,0,M,0,H,0,0,0,0]    (if ELT is between previous mid and head)
        else if ((arr[mid]>elt))
        {
            head=mid-1;
        }

        //ARRAY - [L,0,0,0,M,0,0,0,H] (if ELT is at position mid)
        else if (arr[mid]==elt)
        {
            printf("%i found",elt);
            break;
        }
        
        //SHIFT MID BETWEEN HEAD AND LAST
        mid=(last+head)/2;
    }
    
    //WHEN ELEMENT IS OUT OF ARRAY 
    if(last > head)
        printf("ELT not found");

    return 0;
}