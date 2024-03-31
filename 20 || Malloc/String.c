#include <stdio.h>
#include <malloc.h>

int main() 
{
    char *str;

    // Allocate memory for a string dynamically
    str = (char *)malloc(50 * sizeof(char));

    if (str == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Entered string: %s\n", str);
    
    // Free dynamically allocated memory
    free(str);

    return 0;
}
