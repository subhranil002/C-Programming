#include <stdio.h>

int main() {
    int a = 20;
    int b = 5;

    // 1 means true
    // 0 means false

    printf("%d \n", a == b); // Output: 0 (False, because 20 is not equal to 5)
    printf("%d \n", a != b); // Output: 1 (True, because 20 is not equal to 5)
    printf("%d \n", a > b);  // Output: 1 (True, because 20 is greater than 5)
    printf("%d \n", a >= b); // Output: 1 (True, because 20 is greater than or equal to 5)
    printf("%d \n", a < b);  // Output: 0 (False, because 20 is not less than 5)
    printf("%d \n", a <= b); // Output: 0 (False, because 20 is not less than or equal to 5)

    return 0;
}
