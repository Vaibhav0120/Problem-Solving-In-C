#include<stdio.h>

int main()
{
    int n, s, r, t;

    for (n = 10; n <= 1000; n++)
    {
        s = 0;
        t = n;

        while (t > 0)
        {
            r = t % 10;
            s = s * 10 + r;
            t = t / 10;
        }

        if (n == s)
        {
            printf("%d ", n);
            printf("\n");
        }
    }

    return 0;
}
