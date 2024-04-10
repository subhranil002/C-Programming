#include <stdio.h>

// Function prototype for hello
void hello();
// Function prototype for goodbye
void goodBye();

int main() {
    // Call the hello function
    hello();
    // Call the goodbye function
    goodBye();

    return 0;
}

// Definition of the hello function
void hello() {
    printf("Hello! \n");
}

// Definition of the goodbye function
void goodBye() {
    printf("Good Bye :) \n");
}
