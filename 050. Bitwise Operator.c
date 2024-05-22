#include <stdio.h>

int main() {
    unsigned int a = 6;  // a = 6, which is represented as 0000 0110 in binary
    unsigned int b = 3;  // b = 3, which is represented as 0000 0011 in binary
    unsigned int result; // Variable to store the result of bitwise operations

    // Bitwise AND: Performs AND operation on each pair of corresponding bits
    result = a & b;  // result = 2, which is represented as 0000 0010 in binary
    printf("Bitwise AND: %d & %d = %d\n", a, b, result);

    // Bitwise OR: Performs OR operation on each pair of corresponding bits
    result = a | b;  // result = 7, which is represented as 0000 0111 in binary
    printf("Bitwise OR: %d | %d = %d\n", a, b, result);

    // Bitwise XOR: Performs XOR operation on each pair of corresponding bits
    result = a ^ b;  // result = 5, which is represented as 0000 0101 in binary
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, result);

    // Bitwise NOT: Flips each bit of the operand
    result = ~a;  // result = 4294967295, which is represented as 1111 1111 1111 1111 1111 1111 1111 1001 in binary (assuming 32-bit unsigned int)
    printf("Bitwise NOT: ~%d = %u\n", a, result);

    // Left Shift: Shifts the bits of the operand to the left by a specified number of positions
    result = a << 2;  // result = 24, which is represented as 0001 1000 in binary
    printf("Left Shift: %d << 2 = %d\n", a, result);

    // Right Shift: Shifts the bits of the operand to the right by a specified number of positions
    result = a >> 2;  // result = 1, which is represented as 0000 0001 in binary
    printf("Right Shift: %d >> 2 = %d\n", a, result);

    return 0;
}
