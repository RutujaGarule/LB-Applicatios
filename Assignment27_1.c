// Accept string and accept one character from user
// check that character is present in string or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{	
	BOOL flag = FALSE;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			flag = TRUE;
			break;
		}
		str++;
	}
	return flag;
}

int main()
{
	char Arr[20];
	BOOL bRet = FALSE;
	char cValue = '\0';
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	printf("Enter one character\n");
	scanf(" %c",&cValue);
	
	bRet = ChkChar(Arr,cValue);
	if(bRet == TRUE)
	{
		printf("%c is present in the string\n",cValue);
	}
	else
	{
		printf("%c is not present in the string\n",cValue);
	}

	return 0;
}
