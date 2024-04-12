#include <stdio.h>

int main() {
    int age = 30;
    int *ptr = &age;
    int **pptr = &ptr;

    // Print the value of age indirectly through a pointer to a pointer
    printf("%d", **pptr); // Output: 30

    return 0;
}
