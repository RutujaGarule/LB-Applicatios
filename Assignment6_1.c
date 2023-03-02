// Accept name and print that name

#include<stdio.h>

int main()
{
	char Name[30];
	
	printf("Enter full Name\n");
	scanf("%[^\n]",Name);
	
	printf("Your Name is : %s\n",Name);
	
	
	return 0;
	
}
