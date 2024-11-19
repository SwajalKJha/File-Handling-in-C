#include<stdio.h>

struct student{
	int PRN;
	char NAME[15];
	char SURNAME[15];
};

int main()
{
	struct student s1, s2;
	char ch;
	FILE *fp = fopen("q8.txt", "a+");
	if(fp == NULL)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("Enter the First NAME of Student: ");
	scanf("%s", s1.NAME);
	getchar();	
	printf("Enter the SURNAME of Student: ");
	scanf("%s", s1.SURNAME);
	getchar();
	printf("Enter the PRN of Student: ");
	scanf("%d", &s1.PRN);
	getchar();
	
	fprintf(fp, "Name = %s %s PRN = %d\n", s1.NAME, s1.SURNAME, s1.PRN);
	printf("Data saved Successfully...\n");
	
	rewind(fp);
	while (fscanf(fp, "Name = %s %s PRN = %d\n", s2.NAME, s2.SURNAME, &s2.PRN) != EOF) 
	{
        	printf("DATA READ: Name = %s %s PRN = %d\n", s2.NAME, s2.SURNAME, s2.PRN);
    	}
	fclose(fp);
	return 0;
}
