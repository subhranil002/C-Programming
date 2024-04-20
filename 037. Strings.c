#include <stdio.h>

// Function prototype for printString
void printString(char[]);

int main() {
    char firstName[] = "Subhranil";
    char lastName[] = "Chakraborty";

    printString(firstName);
    printString(lastName);

    // Using printf with %s specifier to print strings directly
    printf("%s \n", firstName);
    printf("%s \n", lastName);

    return 0;
}

// Definition of printString function
void printString(char arr[]) {
    // Iterate through the character array until the null terminator is encountered
    for (int i = 0; arr[i] != '\0'; i++) {
        // Print each character of the array
        printf("%c", arr[i]);
    }
    // Print a newline character to move to the next line after printing the string
    printf("\n");
}
