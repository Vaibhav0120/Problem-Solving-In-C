// Challenge: Input Full Name in one string and extract First Name, Middle Name, Last Name from it.

#include <stdio.h>

int main() {
    int i,j;
    int l1,l2,l3,l;
    char fullName[100];
    char firstName[100], middleName[100], lastName[100];

    // Input full name
    printf("Enter your full name: ");
    gets(fullName);

    // Length of fullName
    i = 0;
    while (fullName[i] != '\n') 
    {
        i++;
    }
    l = i;

    i = 0, j = 0;
    // Extract first name
    while (fullName[i] != ' ')
    {
        firstName[j] = fullName[i];
        i++;
        j++;
    }
    firstName[j] = '\0';
    l1 = j; // Length of firstName
    i++; // Skip the space

    // Extract middle name
    j = 0;
    while (fullName[i] != ' ') 
    {
        middleName[j] = fullName[i];
        i++;
        j++;
    }
    middleName[j] = '\0';
    l2 = j; // Length of middleName
    i++; // Skip the space

    // Extract last name
    j = 0;
    while (fullName[i] != '\0') 
    {
        lastName[j] = fullName[i];
        i++;
        j++;
    }
    lastName[j] = '\0';
    l3 = j;

    // Display the names
    printf("\nFirst Name: %s\n", firstName);
    printf("Middle Name: %s\n", middleName);
    printf("Last Name: %s\n", lastName);

    return 0;
}
