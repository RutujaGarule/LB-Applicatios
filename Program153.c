
#include<stdio.h>

int CountWhitespaces(char *str)
{
	int Count = 0;
	
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			Count++;
		}
		str++;
	}
	return Count;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountWhitespaces(Arr);
	
	printf("Number of white spaces are : %d\n",iRet);
	
	return 0;
}