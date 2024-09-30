#include<stdio.h>

int main()
{
    int BS,DA,HRA,GS;

   
        printf("Enter Base Salary:");
        scanf("%d",&BS);

    if(BS > 10000)
    {
        DA=BS*0.98;
        HRA=BS*0.45;
    }
    else if(BS > 8000)
    {
        DA=BS*0.85;
        HRA=BS*0.3;
    }
    else if(BS > 6000)
    {
        DA=BS*0.6;
        HRA=BS*0.3;
    }
    else if(BS > 5000)
    {
        DA= 1200;
        HRA= 500;
    }
    else
    {
        DA=0;
        HRA=0;
    }   

    GS=BS=DA=HRA;

    printf("Gross Sallery: %d",GS);
}