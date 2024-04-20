#include <stdio.h>

int main() {
    int variable1 = 5;

    int *ptr1 = &variable1;
    // Print the memory address stored in ptr1
    printf("%p \n", ptr1);

    // Increment ptr1 by one (assuming int is 4 bytes)
    ptr1++;
    // Print the incremented memory address stored in ptr1
    printf("%p \n", ptr1);

    // Increment ptr1 by one again
    ptr1++;
    // Print the further incremented memory address stored in ptr1
    printf("%p \n", ptr1);

    float variable2 = 5.55;

    float *ptr2 = &variable2;
    // Print the memory address stored in ptr2
    printf("%p \n", ptr2);

    // Increment ptr2 by one (assuming float is 4 bytes)
    ptr2++;
    // Print the incremented memory address stored in ptr2
    printf("%p \n", ptr2);

    // Increment ptr2 by one again
    ptr2++;
    // Print the further incremented memory address stored in ptr2
    printf("%p \n", ptr2);

    char variable3 = 'a';

    char *ptr3 = &variable3;
    // Print the memory address stored in ptr3
    printf("%p \n", ptr3);

    // Increment ptr3 by one (assuming char is 1 byte)
    ptr3++;
    // Print the incremented memory address stored in ptr3
    printf("%p \n", ptr3);

    // Increment ptr3 by one again
    ptr3++;
    // Print the further incremented memory address stored in ptr3
    printf("%p \n", ptr3);

    return 0;
}
