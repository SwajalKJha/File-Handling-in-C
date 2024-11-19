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
		if(ch == '\n')
        	{
        		count++;
    		}
    	}
    	printf("total no. of lines present: %d\n", count);
    	
    	fclose(fp);
    	
	return 0;
}
