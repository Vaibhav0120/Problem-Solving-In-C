#include<stdio.h>
#include<math.h>

int main()
{
    int N, T, S, R, C;

    printf("Enter N: ");
    scanf("%i", &N);

    T = N;
    S = 0;
    C = 0;

    while (N > 0)
    {
        R = N % 10;
        C = C + 1;
        S = S + pow(R, C);
        N = N / 10;
    }

    if (T == S)
        printf("It is Armstrong");
    else
        printf("It is not Armstrong");

    return 0;
}
