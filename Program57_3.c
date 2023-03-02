// Write application which accept file name from user and read all data from that file and display contents on screen

#include<stdio.h>
#include<fcntl.h>


int main()
{
	char Fname[20];
	int fd = 0, ret = 0;
	char Data[100];
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	ret = read(fd,Data,10);
	
	printf("Data from file is : \n");
	
	write(1,Data,ret);
	
	close(fd);
	
	return 0;
}