#include <stdio.h>

// Function prototype for printArray
void printArray(int[], int);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    // Call printArray function to print the elements of the array
    printArray(arr, 5);

    return 0;
}

// Definition of printArray function
void printArray(int arr[], int n) {
    // Iterate through the array and print each element
    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }
}
