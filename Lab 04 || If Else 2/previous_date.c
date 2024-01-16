#include<stdio.h>

int main()
{
    int d, m, y;
    printf("Enter date: ");
    scanf("%i", &d);
    printf("Enter Month: ");
    scanf("%i", &m);
    printf("Enter Year: ");
    scanf("%i", &y);

    if (m == 1)
    {
        if (d > 1 && d < 32)
        {
            d = d - 1;
        }
        else if (d == 1)
        {
            d = 31;
            m = 12;
            y = y - 1;
        }
        else
        {
            printf("date is not valid");
        }
    }
    else if (m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d > 1 && d < 32)
        {
            d = d - 1;
        }
        else if (d == 1)
        {
            d = 30;
            m = m - 1;
        }
        else
        {
            printf("date is not valid");
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 1 && d < 31)
        {
            d = d - 1;
        }
        else if (d == 1)
        {
            d = 31;
            m = m - 1;
        }
        else
        {
            printf("date is not valid");
        }
    }
    else if (m == 3 || m == 2)
    {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        {
            if (d > 1 && d < 32 && m == 3  || d > 1 && d < 29 && m == 2)
            {
                d = d - 1;
            }
            else if (d == 1)
            {
                if(m == 3)
                {
                    d = 29;
                    m = 2;
                }
                else
                {
                    d = 31;
                    m = 1;
                }
            }
            else
            {
                printf("date is not valid");
            }
        }
        else
        {
            if (d > 1 && d < 32 && m ==3 || d > 1 && d < 28 && m == 2)
            {
                d = d - 1;
            }
            else if (d == 1)
            {
                if(m == 3)
                {
                    d = 28;
                    m = 2;
                }
                else
                {
                    d = 31;
                    m = 1;
                }
            }
            else
            {
                printf("date is not valid");
            }
        }
    }
    else
    {
        if (d > 1 && m > 1 && m <= 12 && y >= 1)
        {
            d = d - 1;
        }
        else
        {
            printf("date is not valid");
        }
    }


    printf("Previous date is: %i / %i / %i", d, m, y);

    return 0;
}
