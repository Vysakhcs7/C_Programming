#include <stdio.h>

int main() {
    FILE *file_pointer;

    // Open a file named "example.txt" for writing
    file_pointer = fopen("example.txt", "w");

    // Check if file opening was successful
    if (file_pointer == NULL) {
        printf("Error opening file!\n");
        return 1; // Return error code
    }

    // Write a character 'A' to the file
    if (fputc('A', file_pointer) == EOF) {
        printf("Error writing to file!\n");
        fclose(file_pointer); // Close the file
        return 1; // Return error code
    }

    // Close the file
    fclose(file_pointer);

    printf("Character written to file successfully!\n");

    return 0; // Return success code
}
