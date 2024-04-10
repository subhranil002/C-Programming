#include <stdio.h>

// Function prototype for factorial
int factorial(int);

int main() {
    // Print the factorial of 5
    printf("Factorial : %d", factorial(5));

    return 0;
}

// Definition of factorial function
int factorial(int num) {
    // Base case: if num is 0, return 1
    if (num == 0 ) {
        return 1;
    }
    
    // Calculate the factorial recursively
    int fact = factorial(num - 1) * num;

    return fact;
}
