#include <stdio.h>

int main() {
    int age = 35;

    // Check if the age is 18 or above using the ternary conditional operator
    // If the condition (age >= 18) is true, print "You can vote"; otherwise, print "You cannot vote"
    age >= 18 ? printf("You can vote") : printf("You cannot vote");

    return 0;
}
