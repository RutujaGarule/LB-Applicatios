// Write recursive program which accept string from user and count number of small characters
// HElloWOrlD
// 5

#include<stdio.h>

int CountSmallChar(char * str)
{
	static int iCount = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCount++;
		}
		str++;
		CountSmallChar(str);
	}
	return iCount;
}


int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSmallChar(Arr);
	printf("Number of small characters are : %d\n",iRet);
	
	
	return 0;
}