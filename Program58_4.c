// Write a program which accepts file name from user and one character from user and count number of occurrences of that characters from that file

#include<stdio.h>
#include<fcntl.h>

int Occurrence(char * Name, char ch)
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
			if(Data[i] == ch)
			{
				iCount++;
			}
		}
	}
	
	close(fd);
	
	return iCount;
}

int main()
{
	char Fname[20];
	int iRet = 0;
	char ch = '\0';
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",Fname);
	printf("Enter one character : \n");
	scanf(" %c",&ch);
	
	iRet = Occurrence(Fname,ch);
	
	printf("%c occurres %d times in the file\n",ch,iRet);
	
	return 0;
}