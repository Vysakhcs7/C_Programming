/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // fputc() SINGLE CHARACTER

    FILE *file_pointer;
    int ch;

    // Open a file named "example.txt" for writing
    file_pointer = fopen("example.txt", "w");

    // Check if file opening was successful
    if (file_pointer == NULL)
    {
        printf("Error opening file!\n");
        return 1; // Return error code
    }

    // Write a character 'A' to the file
    if (fputc('A', file_pointer) == EOF)
    {
        printf("Error writing to file!\n");
        fclose(file_pointer); // Close the file
        return 1;             // Return error code
    }

    // Close the file
    fclose(file_pointer);

    printf("Character written to file successfully!\n");

    // fputc() MULTIPLE CHARACTER

    // Open file for writing
    if ((file_pointer = fopen("example.txt", "a")) == NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }

    printf("Enter text:\n");

    // Read characters from standard input and write to file
    // Press Ctrl+Z followed by Enter in Windows to stop reading characters
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, file_pointer);
    }

    // Close the file
    fclose(file_pointer);

    return 0; // Return success code
}

*/
//----------------------------------------------------------------------------------------------------------------------------
/*
// fgetc() SINGLE CHARACTER
#include <stdio.h>

int main()
{
    FILE *file_pointer;
    int ch;

    // Open the file named "example.txt" for reading
    file_pointer = fopen("example.txt", "r");

    // Check if file opening was successful
    if (file_pointer == NULL)
    {
        printf("Error opening file!\n");
        return 1; // Return error code
    }

    // Read characters from the file until end-of-file is reached
    while ((ch = fgetc(file_pointer)) != EOF)
    {
        printf("%c", ch); // Print the character
    }

    // Close the file
    fclose(file_pointer);

    return 0; // Return success code
}
*/
//----------------------------------------------------------------------------------------------------------------------------
// Copy a file to another file
/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr, *fptr2;
    int ch;
    fptr = fopen("example.txt","r");
    if(fptr == NULL)
    {
        printf("Error in opening file fptr");
        exit(1);
    }

    fptr2 = fopen("a.txt","w");
     if(fptr2 == NULL)
    {
        printf("Error in opening file fptr2");
                exit(1);
    }
   while((ch = fgetc(fptr)) != EOF)
   {

      fputc(ch,fptr2);

   }
    fclose(fptr);
    fclose(fptr2);
    return 0; // Return success code
}
*/
//----------------------------------------------------------------------------------------------------------------------------
/*
// fputs()

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("example.txt", "w"); // Open file for writing
    if (fp == NULL)
    {
        printf("Error in opening file fptr");
        exit(1);
    }
    else
    {
        fputs("Hello!\nHow are you?\nHow is the day?", fp); // Write string to file
    }
    fclose(fp); // Close file
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
/*
#include <stdio.h>
int main() {
    FILE *fp;
    char str[100]; // Buffer to hold the input string

    // Open file for writing
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit program with error code
    }

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line of input from the user

    // Write the input string to the file
    fputs(str, fp);

    // Close the file
    fclose(fp);

    printf("String written to file successfully.\n");

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
// fgets()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("example.txt", "w"); // Open file for writing
    fclose(fp);                     // Close file
    return 0;
}
//----------------------------------------------------------------------------------------------------------------------------