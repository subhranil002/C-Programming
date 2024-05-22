#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Print the number of arguments
    printf("Number of arguments: %d\n", argc);

    // Print each argument
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    // Convert the first and second arguments to integers
    int arg1 = atoi(argv[1]);  
    int arg2 = atoi(argv[2]);  
    
    // Calculate the sum of the two arguments
    int sum = arg1 + arg2;
    
    // Print the sum of the two arguments
    printf("Sum of %d and %d is %d\n", arg1, arg2, sum);

    return 0;
}
