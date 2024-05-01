#include <stdio.h>
#include <string.h>

// Define a struct to represent a Computer Engineering student
typedef struct ComputerEngineeringStudent {
    int roll;       // Student roll number
    float cgpa;     // Student CGPA
    char name[100]; // Student name
} coe; // Typedef creates an alias 'coe'

int main() {
    coe s1; // Declare a 'coe' type (alias for 'ComputerEngineeringStudent')

    // Assign values to the student's fields
    s1.roll = 85;
    s1.cgpa = 9.5;
    strcpy(s1.name, "Subhranil 1");

    // Print the student's details
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %f\n", s1.cgpa);

    return 0;
}
