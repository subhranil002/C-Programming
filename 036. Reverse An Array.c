#include <stdio.h>

// Function prototype for reverseArray
void reverseArray(int[], int);

// Function prototype for printArray
void printArray(int[], int);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    printArray(arr, 5);

    return 0;
}

// Definition of reverseArray function
void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

// Definition of printArray function
void printArray(int arr[], int n) {
    // Iterate through the array and print each element
    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }
}
