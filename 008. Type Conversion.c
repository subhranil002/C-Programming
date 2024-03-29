#include <stdio.h>

int main() {
    // int a = 1.999999; // error
    int a = (int) 1.999999;

    printf("%d", a); // Output: 1

    return 0;
}
