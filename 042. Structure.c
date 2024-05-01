#include <stdio.h>
#include <string.h>

// Define a struct to represent a student
struct student {
    int roll;       // Student roll number
    float cgpa;     // Student CGPA
    char name[100]; // Student name
};

int main() {
    struct student s1; // Declare the first student struct

    // Assign values to the first student's fields
    s1.roll = 85;
    s1.cgpa = 9.5;
    strcpy(s1.name, "Subhranil 1");

    // Initialize the second student with a list of values
    struct student s2 = {70, 8.5, "Subhranil 2"};

    // Initialize the third student with default values (zero-initialized)
    struct student s3 = {0}; // All fields set to zero or default

    // Print the first student's details
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %f\n", s1.cgpa);

    // Print the second student's details
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("CGPA: %f\n", s2.cgpa);

    // Print the third student's details
    printf("Name: %s\n", s3.name); // Likely empty or with unexpected data
    printf("Roll: %d\n", s3.roll); // Output: 0
    printf("CGPA: %f\n", s3.cgpa); // Output: 0.000000

    return 0;
}
