#include<stdio.h>
#include<stdlib.h>

int main(){
	// ******************** r ************************
	FILE *fp1 = fopen("q2.txt","r");
	if(fp1 == NULL)
	{
		puts("File opening failed\n");
		return -1;
	}
	else
	{
		printf("q2.txt file opened successfully\n");
	}
	
	// ******************** w ************************
	FILE *fp2 = fopen("q2.txt","w");
	if(fp2 == NULL)
	{
		puts("File opening failed\n");
		return -1;
	}
	else
	{
		printf("q2.txt file opened successfully\n");
	}
	// ******************** a ************************
	FILE *fp3 = fopen("q2.txt","a");
	if(fp3 == NULL)
	{
		puts("File opening failed\n");
		return -1;
	}
	else
	{
		printf("q2.txt file opened successfully\n");
	}

	// ******************** r+ UPDATE MODE (read+write) ************************
	FILE *fp4 = fopen("q2.txt","r+");
	if(fp4 == NULL)
	{
		puts("File opening failed\n");
		return -1;
	}
	else
	{
		printf("q2.txt file opened successfully\n");
	}

	// ******************** w+ (write+read) ************************
	FILE *fp5 = fopen("q2.txt","w+"); 
	if(fp5 == NULL)
	{
		puts("File opening failed\n");
		return -1;
	}
	else
	{
		printf("q2.txt file opened successfully\n");
	}


	// ******************** a+ (append+read) ************************
	FILE *fp6 = fopen("q2.txt","a+"); 
	if(fp6 == NULL)
	{
		puts("File opening failed\n");
		return -1;
	}
	else
	{
		printf("q2.txt file opened successfully\n");
	}
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);
	fclose(fp5);
	fclose(fp6);
}
