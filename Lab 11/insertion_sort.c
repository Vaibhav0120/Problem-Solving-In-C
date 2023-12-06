#include <stdio.h>

int main() {
    int i,n,k,j;

    //INPUT ARRAY TO SORT
    
    printf("Enter the value of N:");
    scanf("%i",&n);

    int a[100];

    for(i=0;i<n;i++)
    {
        printf("Enter %ith element:",i);
        scanf("%i",a[i]);
    }

    //SORTING
    /*
    Eg: [21,16,(34),5]  --> k=34
        [21,16,16,5]
        [21,21,16,5]
        [34,21,16,5]    <-- SORTED
    */
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(a[j]<k && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
            a[j+1]=k;
    }

    //PRINTING SORTED ARRAY
    
    for(i=0;i<n;i++)
    {
        printf("%i ",a[i]);
    }

    return 0;
}