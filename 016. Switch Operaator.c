#include <stdio.h>

int main() {
    int day = 4;

    // Switch statement to check the value of the 'day' variable
    switch (day) {
        // Case 1: if 'day' is 1, print "Monday"
        case 1:
            printf("Monday");
            break;
        // Case 2: if 'day' is 2, print "Tuesday"
        case 2:
            printf("Tuesday");
            break;
        // Case 3: if 'day' is 3, print "Wednesday"
        case 3:
            printf("Wednesday");
            break;
        // Case 4: if 'day' is 4, print "Thursday"
        case 4:
            printf("Thursday");
            break;
        // Case 5: if 'day' is 5, print "Friday"
        case 5:
            printf("Friday");
            break;
        // Case 6: if 'day' is 6, print "Saturday"
        case 6:
            printf("Saturday");
            break;
        // Case 7: if 'day' is 7, print "Sunday"
        case 7:
            printf("Sunday");
            break;
        // Default case: if 'day' is none of the above values, print "Wrong Input"
        default:
            printf("Wrong Input");
            break;
    }

    return 0;
}
