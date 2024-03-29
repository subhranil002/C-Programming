#include <stdio.h>

int main() {
    int age;

    printf("Enter age : ");
    scanf("%d", &age);

    // Check if the age is 18 or above
    if (age >= 18) {
        printf("Adult"); // Output: Adult
    } 
    // Check if the age is between 13 and 17 (inclusive)
    else if (age >= 13 && age < 18) {
        printf("Teenager"); // Output: Teenager
    } 
    // If the age is less than 13
    else {
        printf("Child"); // Output: Child
    }
    
    return 0;
}
