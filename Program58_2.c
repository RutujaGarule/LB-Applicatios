// Write a program which accepts file name from user and count number of small characters from that file

#include<stdio.h>
#include<fcntl.h>

int CountSmall(char * Name)
{
	int iCount = 0, iLength = 0, i = 0, fd = 0;
	char Data[100];
	
	fd = open(Name,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	while((iLength = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i = 0;i < iLength;i++)
		{
			if(Data[i] >= 'a' && Data[i] <= 'z')
			{
				iCount++;
			}
		}
	}
	return iCount;
}

int main()
{
	char Fname[20];
	int iRet =0;
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",Fname);
	
	iRet = CountSmall(Fname);
	
	printf("small characters in file is : %d\n",iRet);
	
	return 0;
}