#include <stdio.h>
#include <string.h>

// Define a struct to represent a student
struct student {
    int roll;       // Student roll number
    float cgpa;     // Student CGPA
    char name[100]; // Student name
};

int main() {
    struct student s1; // Declare a student struct

    // Assign values to the student's fields
    s1.roll = 85;
    s1.cgpa = 9.5;
    strcpy(s1.name, "Subhranil 1");

    struct student *ptr = &s1; // Declare a pointer to the student struct

    // Print the student's details using the pointer
    printf("Name: %s\n", (*ptr).name); // Access struct member with dereference
    printf("Roll: %d\n", ptr->roll);   // Access struct member with arrow operator
    printf("CGPA: %f\n", s1.cgpa);     // Access struct member directly (without pointer)

    return 0;
}
