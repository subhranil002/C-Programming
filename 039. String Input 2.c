#include <stdio.h>

int main() {
    char fullname[100];

    // Read a line of text and store it in fullname
    // gets(fullname); // Outdated
    // Read a line of text from stdin and store it in fullname
    fgets(fullname, 100, stdin); // Subhranil Chakraborty
    // Print the string stored in fullname
    puts(fullname); // Subhranil Chakraborty

    return 0;
}