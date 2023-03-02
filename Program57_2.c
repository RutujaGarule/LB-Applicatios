// Write application which accept file name from user and create that file

#include<stdio.h>
#include<fcntl.h>


int main()
{
	char Fname[20];
	int fd = 0;
	
	printf("Enter file name that you want to create : \n");
	scanf("%s",Fname);
	
	fd = creat(Fname,0777);
	
	if(fd == -1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	else
	{
		printf("File created successfully with FD %d\n",fd);
	}
	
	return 0;
}