#include <stdio.h>

int main() {
    int a = 20;
    int b = 5;

    printf("%d \n", a + b); // Output: 25 (addition)
    printf("%d \n", a - b); // Output: 15 (subtraction)
    printf("%d \n", a * b); // Output: 100 (multiplication)
    printf("%d \n", a / b); // Output: 4 (integer division)
    printf("%d \n", a % b); // Output: 0 (remainder/modulus)

    a++; // Increment a
    b--; // Decrement b

    printf("%d \n", a); // Output: 21 (post-increment)
    printf("%d \n", b); // Output: 4 (post-decrement)

    ++a; // Increment a
    --b; // Decrement b

    printf("%d \n", a); // Output: 22 (pre-increment)
    printf("%d \n", b); // Output: 3 (pre-decrement)

    return 0;
}
