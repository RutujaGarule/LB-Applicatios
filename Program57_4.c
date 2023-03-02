// Write application which accept file name from user and display size of file

#include<stdio.h>
#include<fcntl.h>


int main()
{
	char Fname[20];
	int fd = 0, iSize = 0, iLength = 0;
	char Data[100];
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((iLength = read(fd,Data,sizeof(Data))) != 0)
	{
		iSize = iSize + iLength;
	}
	
	printf("Size of file is : %d\n",iSize);
	
	return 0;
}