#include <stdio.h>

// Function to calculate Fibonacci series up to n
void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d: ", n);
    printf("%d, %d, ", first, second);

    next = first + second;

    while (next <= n) 
    {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a number to calculate Fibonacci series up to: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}
