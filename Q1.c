#include<stdio.h>

int main()
{
	//Case 1
	FILE *fp1 = fopen("file1.txt","r");   // file1.txt should exist
		if(fp1 == NULL)
		{
			puts("File opening failed\n");
			return -1;
		}
		
	FILE *fp4 = fopen("file4.txt","r+");  // file1.txt should exist
	if(fp4 == NULL){
		puts("File opening failed\n");
	//	return -1;
	}
	else{
	printf("file4.txt file opened successfully\n");
	}
	
	//Case 2
	FILE *fp1 = fopen("file1.txt","r");   // file1.txt doesn't exist
		if(fp1 == NULL)
		{
			puts("File opening failed\n");
			return -1;
		}
		
	FILE *fp4 = fopen("file4.txt","r+");  // file1.txt doesn't exist
	if(fp4 == NULL){
		puts("File opening failed\n");
	//	return -1;
	}
	else{
	printf("file4.txt file opened successfully\n");
	}
	
	fclose(fp1);
	fclose(fp4);
}
