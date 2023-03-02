// Write a program which accepts file name and one count from user and read that number of characters from starting position

#include<stdio.h>
#include<fcntl.h>

int ReadCharacters(char * Name, int count)
{
	int iLength = 0, fd = 0;
	char Data[100];
	
	fd = open(Name,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	iLength = read(fd,Data,count);
	
	write(1,Data,iLength);
	
	close(fd);
}

int main()
{
	char Fname[20];
	int count = 0;
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",Fname);
	printf("Enter count of characters : \n");
	scanf("%d",&count);
	
	ReadCharacters(Fname,count);
	
	return 0;
}