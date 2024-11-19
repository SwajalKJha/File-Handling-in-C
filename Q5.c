#include<stdio.h>

int main()
{	
	int count = 0;
	char ch;
	FILE *fp = fopen("myFirst.txt", "r");
	if (fp == NULL)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while ((ch = fgetc(fp)) != EOF)
	{
        	count++;
    	}
    	printf("total no. of characters present: %d\n", count-1); // -1 because because pointer is 1 ahead of the character position
    	
    	fclose(fp);
    	
	return 0;
}
