#include <stdio.h>

// Function prototype Call By Value
void swap(int, int);
// Function prototype for Call By Refference
void _swap(int*, int*);

int main() {
    int x = 5;
    int y = 10;

    // Print the initial values of x and y
    printf("%d %d \n", x, y); // Output: 5 10

    // Call swap function (values of x and y remain unchanged)
    swap(x,y);
    // Print the values of x and y after calling swap
    printf("%d %d \n", x, y); // Output: 5 10

    // Call _swap function (values of x and y are swapped)
    _swap(&x,&y);
    // Print the values of x and y after calling _swap
    printf("%d %d \n", x, y); // Output: 10 5
    
    return 0;
}

// Call By Value
void swap(int a, int b) {
    // Swap the values of a and b (values are swapped locally)
    int temp = a;
    a = b;
    b = temp;
}

// Call By Refference
void _swap(int *a, int *b) {
    // Swap the values pointed to by a and b (values are swapped directly)
    int temp = *a;
    *a = *b;
    *b = temp;
}
