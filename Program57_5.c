// Write application which accept file name from user and one string from user.
// Write that string at the end of file

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	int fd = 0 , iLength = 0;
	char str[30];
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",Fname);
	
	printf("Enter one string : \n");
	scanf(" %[^'\n']s",str);
	
	fd = open(Fname,O_RDWR | O_APPEND);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	iLength = strlen(str);
	
	write(fd,str,iLength);
	
	close(fd);
	
	return 0;
}