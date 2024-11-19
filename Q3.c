#include<stdio.h>
#include<stdlib.h>

int main()
{
	char name[30];
	int PRN;
	printf("Enter your name: ");
	scanf("%s", name);
	printf("\nEnter your PRN number: ");
	scanf("%d", &PRN);

	FILE *fptr = fopen("myFirst.txt","a+");  // myFirst.txt does not exist, so cannot be opened
	if(fptr == NULL)
	{
		puts("File opening failed\n");
		return -1;
	}
	
		fputs(name,fptr);
		fprintf(fptr, " %d\n", PRN);
		printf("Details added to the file succesfully!!!\n");
		
	fclose(fptr);
}
