#include <stdio.h>

// Function prototype for sum
int sum(int, int);

int main() {
    int a = 10;
    int b = 5;

    // Print the result of sum(a, b)
    printf("%d", sum(a, b));

    return 0;
}

// Definition of the sum function
int sum(int a, int b) {
    // Return the sum of a and b
    return a + b;
}
