//Accept character and check whether it is capital case or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckCapital(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter one character\n");
	scanf("%c",&cValue);
	
	bRet = CheckCapital(cValue);
	if(bRet == TRUE)
	{
		printf("%c is capital\n",cValue);
	}
	else
	{
		printf("%c is not capital\n",cValue);
	}
	
	return 0;
}