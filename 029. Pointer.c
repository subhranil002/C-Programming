#include <stdio.h>

int main() {
    int age = 30;
    int *ptr = &age;

    // Print the memory address of age using %p and %u format specifiers
    printf("%p \n", &age); // Output: Memory address of age in hexadecimal format (e.g., 0061FF1C)
    printf("%u \n", &age); // Output: Memory address of age in unsigned integer format (e.g., 6422300)

    // Print the value stored in ptr, which is the memory address of age
    printf("%u \n", ptr); // Output: Value stored in ptr, same as the memory address of age (e.g., 6422300)

    // Print the memory address of ptr
    printf("%u \n", &ptr); // Output: Memory address of ptr in unsigned integer format (e.g., 6422296)

    // Print the value of age using %u format specifier
    printf("%u \n", age); // Output: Value stored in age (e.g., 30)

    // Print the value stored at the memory address pointed by ptr (value of age)
    printf("%u \n", *ptr); // Output: Value stored at the memory address pointed by ptr (e.g., 30)

    // Print the value stored at the memory address of age
    printf("%u \n", *(&age)); // Output: Value stored at the memory address of age (e.g., 30)

    *ptr = 21;

    // Print the updated value of age after dereferencing and modifying ptr
    printf("%d \n", age); // Output: 21

    // Increment the value stored at the memory address pointed by ptr (value of age)
    (*ptr)++;

    // Then print the updated value of age
    printf("%d \n", age); // Output: 22

    return 0;
}
