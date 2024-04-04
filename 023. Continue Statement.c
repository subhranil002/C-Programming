#include <stdio.h>

int main () {
    for (int i = 0; i < 10; i++) {
        if (i == 6) {
            printf("Skipped %d \n", i);
            // Continue to the next iteration
            continue;
        }
        
        // Print the current value of i
        printf("%d \n", i);
    }
    
    return 0;
}
