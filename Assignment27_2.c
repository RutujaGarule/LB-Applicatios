// Accept string and accept one character from user
// return frequency of that character

#include<stdio.h>

int CountChar(char *str,char ch)
{	
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	char cValue = '\0';
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	printf("Enter one character\n");
	scanf(" %c",&cValue);
	
	iRet = CountChar(Arr,cValue);
	printf("Frequency of %c is : %d\n",cValue,iRet);

	return 0;
}
