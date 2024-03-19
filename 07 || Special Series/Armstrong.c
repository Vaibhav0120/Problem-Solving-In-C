//Armstrong number (Three digit)
//370 = 3^3+7^3+0^3
#include<stdio.h>
#include<math.h>

int main()
{
    int N, T, S, R, C;

    printf("Enter N(3 digit): ");
    scanf("%i", &N);

    T = N;
    S = 0;
    C = 0; //no. of digits

    while(N > 0)
    {
        C += 1;
        N /= 10;
    }
    
    N = T;
    
    while (N > 0)
    {
        R = N % 10;
        S = S + pow(R, C);
        N = N / 10;
    }

    if (T == S)
        printf("It is Armstrong");
    else
        printf("It is not Armstrong");

    return 0;
}
