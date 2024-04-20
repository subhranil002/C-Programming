#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50] = "Subhranil"; // Initialize firstName with "Subhranil"
    int length = strlen(firstName); // Calculate the length of firstName

    printf("%d \n", length); // Output: 9

    char first[100]; // Declare a new character array

    strcpy(first, firstName); // Copy the content of firstName to first

    puts(first); // Output: Subhranil

    char lastName[] = "Chakraborty"; // Initialize lastName with "Chakraborty"

    strcat(firstName, lastName); // Concatenate lastName to firstName

    puts(firstName); // Output: SubhranilChakraborty

    return 0;
}
