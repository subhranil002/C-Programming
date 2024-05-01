#include <stdio.h>
#include <string.h>

// Define a struct to represent a student
struct student {
    int roll;       // Student roll number
    float cgpa;     // Student CGPA
    char name[100]; // Student name
};

// Function prototype for getting student information
void getInfo(struct student s1);

int main() {
    struct student s1; // Declare a student struct

    // Assign values to the student's fields
    s1.roll = 85;
    s1.cgpa = 9.5;
    strcpy(s1.name, "Subhranil 1");

    // Call the getInfo function to print student details
    getInfo(s1);

    return 0;
}

// Definition of getInfo function
void getInfo(struct student s1) {
    // Print the student's details
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %f\n", s1.cgpa);
}
