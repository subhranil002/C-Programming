#include <stdio.h>
#include <string.h>

// Define a struct to represent a student
struct student {
    int roll;       // Student roll number
    float cgpa;     // Student CGPA
    char name[100]; // Student name
};

int main() {
    struct student bca[100]; // Declare an array of 100 student structs

    // Assign values to the first student's fields
    bca[0].roll = 85;
    bca[0].cgpa = 9.5;
    strcpy(bca[0].name, "Subhranil 1");

    // Assign values to the second student's fields
    bca[1].roll = 75;
    bca[1].cgpa = 8.5;
    strcpy(bca[1].name, "Subhranil 2");

    // Assign values to the third student's fields
    bca[2].roll = 65;
    bca[2].cgpa = 7.5;
    strcpy(bca[2].name, "Subhranil 3");

    // Print the first student's details
    printf("Name: %s\n", bca[0].name);
    printf("Roll: %d\n", bca[0].roll);
    printf("CGPA: %f\n", bca[0].cgpa);

    // Print the second student's details
    printf("Name: %s\n", bca[1].name);
    printf("Roll: %d\n", bca[1].roll);
    printf("CGPA: %f\n", bca[1].cgpa);

    // Print the third student's details
    printf("Name: %s\n", bca[2].name);
    printf("Roll: %d\n", bca[2].roll);
    printf("CGPA: %f\n", bca[2].cgpa);

    return 0;
}
