#include <stdio.h>

int main() {
    char *canChange = "Hello World"; // Pointer to a string literal
    puts(canChange); // Outputs: Hello World
    canChange = "Hello"; // Changes where the pointer points to
    puts(canChange); // Outputs: Hello

    char cannotChange[] = "Hello World"; // Array of characters initialized with a string literal
    puts(cannotChange); // Outputs: Hello World
    // cannotChange = "Hello"; // Invalid assignment - you can't assign a new string to the entire array

    return 0;
}
