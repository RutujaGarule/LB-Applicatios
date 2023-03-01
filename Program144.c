
#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		str++;
	}
	if(*str == '\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	char Arr[20];
	bool bRet = false;
	char cValue = '\0';
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	printf("Enter one character\n");
	scanf(" %c",&cValue);
	
	bRet = Check(Arr,cValue);
	
	if(bRet==true)
	{
		printf("character is present\n");
	}
	else
	{
		printf("character is not present\n");
	}
	
	return 0;
}