#include <stdio.h>

int main () {
    int n, sum = 0;

    scanf("%d", &n);

    // Loop from i = 1 to n, calculating the sum of integers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i; // Add current value of i to sum
    }

    // Print the sum of integers from 1 to n
    printf("Sum : %d", sum);
    
    return 0;
}
