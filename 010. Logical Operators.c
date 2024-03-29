#include <stdio.h>

int main() {
    // 1 means true
    // 0 means false

    printf("%d \n", 1 && 0); // Output: 0 (False, because true AND false is false)
    printf("%d \n", 2 > 1 && 5 == 5); // Output: 1 (True, because 2 is greater than 1 AND 5 is equal to 5)
    printf("%d \n", 1 || 0); // Output: 1 (True, because true OR false is true)
    printf("%d \n", 5 == 6 || 6 > 5); // Output: 1 (True, because 5 is not equal to 6 OR 6 is greater than 5)
    printf("%d \n", !1); // Output: 0 (False, because NOT true is false)
    printf("%d \n", !(5 == 1)); // Output: 1 (True, because NOT false is true)

    return 0;
}
