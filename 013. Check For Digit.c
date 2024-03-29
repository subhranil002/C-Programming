#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch); // 5

    int is_digit = (ch >= '0' && ch <= '9');

    printf("%d", is_digit); // 1

    return 0;
}
