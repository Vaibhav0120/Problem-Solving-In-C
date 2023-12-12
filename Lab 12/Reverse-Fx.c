//NOT COMPLETE
#include <stdio.h>

int reverseRecursive(int num) {
    if(num == 0) {
        return 0;
    }
    else {
        return (num % 10) * 10 + reverseRecursive(num / 10);
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reverse of the number is: %d", reverseRecursive(num));

    return 0;
}