#include <stdio.h>

int main () {
    int n, fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i; // Multiply fact by i in each iteration
    }

    printf("Factorial : %d", fact);

    return 0;
}
