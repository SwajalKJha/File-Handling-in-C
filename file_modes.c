#include<stdio.h>
#include<stdlib.h>

int main(){
	char filename[30];
	char mode[10];
	printf("Enter the file name with extension .txt: ");
	scanf("%s", filename); // hello.txt
	printf("\nEnter the file mode: ");
	scanf("%s", mode); // hello.txt

	// ******************** r ************************
	FILE *fp1 = fopen(filename,"r");  // file1.txt does not exist so cannot be opened
	// check if file opened successfully
	if(fp1 == NULL){
		puts("File opening failed\n");
		// return -1;
	}
	
	// ******************** w ************************
	FILE *fp2 = fopen(filename,"w");  // file2.txt does not exist so it will be created in w mode
	// if file exists, it will erase the previous data
	// check if file opened successfully
	if(fp2 == NULL){
		puts("File opening failed\n");
	//	return -1;
	}
	else{
	printf("file2.txt file opened successfully\n");
	}

	// ******************** a ************************
	FILE *fp3 = fopen(filename,"a");  // file3.txt does not exist so it will be created in a mode
	// if file exists, it will not erase previous data, append new data at end of file
	// check if file opened successfully
	if(fp3 == NULL){
		puts("File opening failed\n");
	//	return -1;
	}
	else{
	printf("file3.txt file opened successfully\n");
	}

	// ******************** r+ UPDATE MODE (read+write) ************************
	FILE *fp4 = fopen(filename,"r+");  // file4.txt should exist
	// if file exists, the previous data is not erased
	// check if file opened successfully
	if(fp4 == NULL){
		puts("File opening failed\n");
	//	return -1;
	}
	else{
	printf("file4.txt file opened successfully\n");
	}

	// ******************** w+ (write+read) ************************
	FILE *fp5 = fopen("file5.txt","w+");  // file5.txt will be created if it does not exist
	// if file exists, the previous data is erased
	
	// check if file opened successfully
	if(fp5 == NULL){
		puts("File opening failed\n");
	//	return -1;
	}
	else{
	printf("file5.txt file opened successfully\n");
	}


	// ******************** a+ (append+read) ************************
	FILE *fp6 = fopen("file6.txt","a+");  // file6.txt if it does not exist, file is created
	// if file exists, the previous data is not erased, new data is appended in the end
	// we cannot modify the previous data
	
	// check if file opened successfully
	if(fp6 == NULL){
		puts("File opening failed\n");
	//	return -1;
	}
	else{
	printf("file6.txt file opened successfully\n");
	}
	return 0;
}
