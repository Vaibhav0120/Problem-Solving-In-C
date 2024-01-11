#include<stdio.h>

int main()
{
    int d,m,y;
    printf("Enter date: ");
    scanf("%i",&d);
    printf("Enter Month: ");
    scanf("%i",&m);
    printf("Enter Year: ");
    scanf("%i",&y);

    if (m==1||m==3||m==5||m==7||m==8||m==10)
    {
        if(d<31)
        {
           d=d+1;
        }
        else if (d==31)
        {
            d=1; 
            m=m+1;
        }
        else
        {
            printf("date is not valid");
        }
    }
    else if(m==4||m==6||m==9||m==11)
    {
        if(d<30)
        {
            d=d+1;
        }
        else if (d=30)
        {
            d=1;
            m=m+1;
        }
        else
        {
            printf("date is not valid");
        }
    }
    else if(m==2)
    {
        if(y%4==0 && y%100!=0 || y%400==0)
        {
           if(d<29)
        {
            d=d+1;
        }
        else if (d==29)
        {
            d=1;
            m=m+1;
        }
        else
        {
            printf("date is not valid");
        }
        }
        else
        {
            if(d<28)
        {
            d=d+1;
        }
        else if (d==28)
        {
            d=1;
            m=m+1;
        }
        else
        {
            printf("date is not valid");
        }
        }
    }
    else if(m==12)
    {
        if(d<31)
        {
            d=d+1;
        }
        else if (d==31)
        {
            d=1;
            m=1;
            y=y+1;
        }
        else
        {
            printf("date is not valid");
        }
    }
else
{
    if (d<1 || 0 < m < 12 || y < 1)
    {
        printf("date is not valid");
    }
    else
    {
        printf("next date is :%i / %i / %i",d,m,y);    
    }
}   
return 0;
}