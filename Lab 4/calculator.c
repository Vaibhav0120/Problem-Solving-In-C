#include <stdio.h>

int main()
{   int x;
	float a, b, c;
		printf("Addition (1), Subtraction (2), Multipliction(3), division (4): ");
		scanf(" %i",&x);


		printf("Enter first number: ");
		scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);

		if (x==1)
			{
                printf("%.1f + %.1f = %.1f\n", a, b, a + b);
            }
        if (x==2)
			{
                printf("%.1f - %.1f = %.1f\n", a, b, a - b);
            }

        if (x==3)
			{
                printf("%.1f * %.1f = %.1f\n", a, b, a * b);
            }
        if (x==4)
			{
                printf("%.1f / %.1f = %.2f\n", a, b, a / b);
            }
		else
		{
            printf("Error! please write a valid operator\n");
		}
}
