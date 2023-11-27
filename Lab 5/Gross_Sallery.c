#include<stdio.h>

int main()
{
    float BS,DA,HRA,GS;

    printf("Enter Base Salary; ");
    scanf("%f",BS);

    if(BS>10000)
    {
        DA = BS * 0.98;
        HRA = BS * 0.45;
        GS = BS + DA + HRA;
    }
    else if(BS>8000)
    {
        DA = BS * 0.85;
        HRA = BS * 0.3;
        GS = BS + DA + HRA;
    }
    else if(BS>6000)
    {
        DA = BS * 0.6;
        HRA = BS * 0.3;
        GS = BS + DA + HRA;
    }
    else if (BS>5000)
    {
        DA = 1200;
        HRA = 500;
        GS = BS + DA + HRA;
    }
    else
    {
        GS = BS;
    }

    printf("%f",GS);

    return 0;
}