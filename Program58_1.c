// Write a program which accepts file name from user and count number of capital characters from that file

#include<stdio.h>
#include<fcntl.h>

int main()
{
	char Fname[20];
	int fd = 0, iCount = 0, iLength = 0, i = 0;
	char Data[100];
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	while((iLength = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i = 0;i < iLength;i++)
		{
			if(Data[i] >= 'A' && Data[i] <= 'Z')
			{
				iCount++;
			}
		}
	}
	
	printf("Capital characters in file is : %d\n",iCount);
	
	return 0;
}