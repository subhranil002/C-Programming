#include <stdio.h>

int main () {
    for (int i = 0; i < 50; i++) {
        if (i == 12) {
            printf("Break Called");
            // Exit the loop
            break;
        }
        
        // Print the current value of i
        printf("%d \n", i);
    }
    
    return 0;
}
