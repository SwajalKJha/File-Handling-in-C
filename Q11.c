#include <stdio.h>
#include <stdlib.h>

#define FILENAME "hello.txt"
#define MAX_SIZE 256

int main() {
    char data[MAX_SIZE]; // Array to hold file content
    FILE *file = fopen(FILENAME, "r");

    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    for (int read_count = 0; read_count < 3; read_count++) {
        // Clear the data array for each read
        for (int i = 0; i < MAX_SIZE; i++) {
            data[i] = '\0';
        }

        // Read the file into the array
        fread(data, sizeof(char), MAX_SIZE - 1, file); // -1 for null terminator
        data[MAX_SIZE - 1] = '\0'; // Ensure null termination

        // Print the content read from the file
        printf("Read %d:\n%s\n", read_count + 1, data);

        // Reset the file pointer to the beginning of the file
        fseek(file, 0, SEEK_SET);
    }

    // Close the file
    fclose(file);

    return EXIT_SUCCESS;
}

