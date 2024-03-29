#include <stdio.h>

int main() {
    int a = 20;
    int b = 5;
    
    printf("%d %d \n", a, b);   // Output: 20 5 (original values of a and b)

    b += a;                     // Equivalent to: b = b + a
    printf("%d %d \n", a, b);   // Output: 20 25 (b is incremented by the value of a)

    b -= a;                     // Equivalent to: b = b - a
    printf("%d %d \n", a, b);   // Output: 20 5 (b is decremented back to its original value)

    b *= a;                     // Equivalent to: b = b * a
    printf("%d %d \n", a, b);   // Output: 20 100 (b is multiplied by the value of a)

    b /= a;                     // Equivalent to: b = b / a
    printf("%d %d \n", a, b);   // Output: 20 5 (b is divided by the value of a)

    return 0;
}
