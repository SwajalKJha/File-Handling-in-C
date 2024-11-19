#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main()
{
	char input[MAX];
	char array[MAX];

	printf("Enter a line of text: ");
	if (fgets(input, sizeof(input), stdin) == NULL)
	{
		printf("Error reading input");
		return -1;
	}
	
	// Open file for writing
	FILE *fp_w = fopen("q9.txt", "w");
	if (fp_w == NULL)
	{
		printf("Error opening file for writing");
		return -1;
	}
	fputs(input, fp_w);
	fclose(fp_w); // Close the file after writing
	   
	//-------------------------------------------------
	    
	// Open the file for reading
	FILE *fp_r = fopen("q9.txt", "r");
	if (fp_r == NULL) 
	{
		printf("Error opening file for reading");
		return -1;
	}
	// Read the data back from the file
	if (fgets(array, sizeof(array), fp_r) == NULL)
	{
		printf("Error reading from file");
		fclose(fp_r);
		return -1;
	}
	
	fclose(fp_r);
	printf("Data read from file: %s", array);

	return 0;
}

