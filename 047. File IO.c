#include <stdio.h>

int main () {
    FILE *fptr;

    // Attempt to open the file "test.txt" in read mode
    fptr = fopen("test.txt", "r");
    
    // Check if the file couldn't be opened
    if (fptr == NULL) {
        printf("File not found\n");
    } else {
        // Close the file if it was successfully opened
        fclose(fptr);

        // Open the file in write mode
        fptr = fopen("test.txt", "w");

        // Write characters to the file
        fprintf(fptr, "%c", 'A');
        fprintf(fptr, "%c", 'p');
        fprintf(fptr, "%c", 'p');
        fprintf(fptr, "%c", 'l');
        fprintf(fptr, "%c", 'e');

        // Close the file
        fclose(fptr);

        // Open the file in read mode
        fptr = fopen("test.txt", "r");

        char ch;

        // Read characters from the file and print them
        fscanf(fptr, "%c", &ch);
        printf("%c\n", ch); // Output: A
        fscanf(fptr, "%c", &ch);
        printf("%c\n", ch); // Output: p
        fscanf(fptr, "%c", &ch);
        printf("%c\n", ch); // Output: p
        fscanf(fptr, "%c", &ch);
        printf("%c\n", ch); // Output: l
        fscanf(fptr, "%c", &ch);
        printf("%c\n", ch); // Output: e

        // Close the file
        fclose(fptr);

        // Open the file in append mode
        fptr = fopen("test.txt", "a");

        // Append characters to the file
        fputc('M', fptr);
        fputc('a', fptr);
        fputc('n', fptr);
        fputc('g', fptr);
        fputc('o', fptr);

        // Close the file
        fclose(fptr);

        // Open the file in read mode
        fptr = fopen("test.txt", "r");

        // Read and print individual characters from the file
        printf("%c\n", fgetc(fptr)); // Output: A
        printf("%c\n", fgetc(fptr)); // Output: p
        printf("%c\n", fgetc(fptr)); // Output: p
        printf("%c\n", fgetc(fptr)); // Output: l
        printf("%c\n", fgetc(fptr)); // Output: e
        printf("%c\n", fgetc(fptr)); // Output: M
        printf("%c\n", fgetc(fptr)); // Output: a
        printf("%c\n", fgetc(fptr)); // Output: n
        printf("%c\n", fgetc(fptr)); // Output: g
        printf("%c\n", fgetc(fptr)); // Output: o 


        // Close the file
        fclose(fptr);

        // Open the file in read mode
        fptr = fopen("test.txt", "r");

        // Read characters from the file until EOF is reached and print them
        ch = fgetc(fptr);
        while (ch != EOF)
        {
            printf("%c", ch); // Output: AppleMango
            ch = fgetc(fptr);
        }
        printf("\n");
        
    }
    
    printf("done\n"); // Output: done
    return 0;
}
