#include <stdio.h>

int main() {
    char fullname[100];

    // scanf function with the %s specifier reads characters until it encounters whitespace
    // Use %[^\n] to read characters until newline with scanf
    scanf("%s", &fullname); // Subhranil Chakraborty
    printf("%s \n", fullname); // Subhranil

    return 0;
}
