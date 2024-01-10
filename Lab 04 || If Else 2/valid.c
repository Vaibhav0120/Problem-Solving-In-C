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
    if (d<1||m<1||y<1)
    {
        printf("invaild input");
    }
    else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d<32)
        {
            printf("invaild input");
        }
        else
        {
            printf("this is a vaild date");
        }
    }
    else if(m==4||m==6||m==9||m==11)
    {
        if(d<31)
        {
            printf("this is a vaild date");
        }
        else
        {
            printf("invaild input");
        }
    
    }
    else if(m==2)
    {
        if(y%4==0 && y%100!=0 || y%400==0)
        {
           if(d<30)
        {
            printf("this is a vaild date");
        }
        else
        {
            printf("invaild input");
        }
        }
        else
        {
            if(d<29)
        {
            printf("this is a vaild date");
        }
        else
        {
            printf("invaild input");
        }
        }
    }
return 0;
}