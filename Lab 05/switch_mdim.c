#include<stdio.h>

int main() 
{
    int y,m;
    printf("Enter year: ");
    scanf("%i",&y);
    printf("Enter month: ");
    scanf("%i",&m);

    switch(m)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12: printf("MDIM = 31"); break;

        case 4:case 6:case 9:case 11: printf("MDIM = 30"); break;

        case 2: if(y%4==0 || y%100!=0 && y%400==0) 
        {
            printf("MDIM = 29");
            break;
        }
        else
        {
            printf("MDIM = 28");
            break;
        }
        default:printf("invalid input");
    }
    return 0;
}