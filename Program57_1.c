// Write application which accept file name from user and open that file in read mode

#include<stdio.h>
#include<fcntl.h>


int main()
{
	char Fname[20];
	int fd = 0;
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File open successfully\n");
	}
	
	return 0;
}