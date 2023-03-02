// Write recursive program which accept string from user and count white spaces
// HE llo WOr LD
// 3

#include<stdio.h>

int CountWhiteSpaces(char * str)
{
	static int iCount = 0;
	
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCount++;
		}
		str++;
		CountWhiteSpaces(str);
	}
	return iCount;
}


int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountWhiteSpaces(Arr);
	printf("Number of white spaces are : %d\n",iRet);
	
	
	return 0;
}