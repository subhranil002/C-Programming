#include <stdio.h>

// Function prototype for printHW
void printHW(int);

int main() {
    // Call printHW function with count as argument
    printHW(10);

    return 0;
}

// Definition of printHW function
void printHW(int count) {
    // Base case: if count is 0, return
    if (count == 0) {
        return;
    }

    // Decrement count
    count--;

    // Recursively call printHW with decremented count
    printHW(count);

    // Print "Hello World!"
    printf("Hello World! \n");
}
