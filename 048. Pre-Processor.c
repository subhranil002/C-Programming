#include <stdio.h>   // Includes the contents of the standard input-output header file

#define PI 3.14      // Defines a macro named PI with the value 3.14
#undef PI            // Undefines the macro PI

// Conditional Compilation
#if defined(PI)
    #define RADIUS 10  // If PI is defined, defines a macro named RADIUS with value 10
#else
    #define RADIUS 0   // If PI is not defined, defines a macro named RADIUS with value 0
#endif

// Additional Conditional Compilation
#ifdef DEBUG
    #define LOG(msg) printf("DEBUG: %s\n", msg)  // If DEBUG is defined, defines a macro for logging
#else
    #define LOG(msg)  // If DEBUG is not defined, defines an empty macro for logging
#endif

// Conditional Compilation for undefined macros
#ifndef VERSION
    #define VERSION "1.0"  // If VERSION is not defined, defines it with value "1.0"
#endif

// More Conditional Compilation
#if VERSION == "1.0"
    #define NEW_FEATURE 0  // If VERSION is "1.0", defines NEW_FEATURE with value 0
#elif VERSION == "2.0"
    #define NEW_FEATURE 1  // If VERSION is "2.0", defines NEW_FEATURE with value 1
#endif

#pragma message("Compiling " __FILE__)  // Outputs a compiler-specific message during compilation
#line 100 "myfile.c"  // Changes the line number to 100 and the file name to "myfile.c"

int main() {
    LOG("Starting the program");  // Uses the LOG macro to print a debug message if DEBUG is defined
    printf("Radius: %d\n", RADIUS);  // Prints the value of the RADIUS macro
    printf("Version: %s\n", VERSION);  // Prints the value of the VERSION macro
    return 0;
}
