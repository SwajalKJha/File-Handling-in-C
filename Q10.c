#include <stdio.h>
#include <stdlib.h>

#define FILENAME "hello.txt"
#define MAX_CHARS 12 // 7 + 5 = 12 (maximum needed characters)

int main() {
    char array[MAX_CHARS + 1]; // +1 for the null terminator
    FILE *file = fopen(FILENAME, "r");

    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read the first 7 characters
    for (int i = 0; i < 7; i++) {
        array[i] = fgetc(file);
        if (array[i] == EOF) break; // Check for end of file
    }
    array[7] = '\0'; // Null-terminate the string

    // Print the first 7 characters
    printf("First 7 characters: %s\n", array);

    // Use fseek to move the file pointer
    fseek(file, 7, SEEK_CUR);

    // Read the next 5 characters
    for (int i = 0; i < 5; i++) {
        array[i] = fgetc(file);
        if (array[i] == EOF) break; // Check for end of file
    }
    array[5] = '\0'; // Null-terminate the string

    // Print the next 5 characters
    printf("Next 5 characters after offset: %s\n", array);

    // Close the file
    fclose(file);

    return EXIT_SUCCESS;
}

