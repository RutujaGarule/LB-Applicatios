// Write a recursive program which accept string from user and count number of characters
// hello
// 5

#include<stdio.h>

int CountChar(char * str)
{
	static int iCount = 0;
	
	if(*str != '\0')
	{
		iCount++;
		str++;
		CountChar(str);
	}
	return iCount;
}


int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountChar(Arr);
	printf("Characters in the string are : %d\n",iRet);
	
	
	return 0;
}