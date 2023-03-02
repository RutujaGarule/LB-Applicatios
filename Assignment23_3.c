//Accept character and check whether it is digit or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckDigit(char ch)
{
	if((ch >= '0') && (ch <= '9'))
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
	
	bRet = CheckDigit(cValue);
	if(bRet == TRUE)
	{
		printf("%c is digit\n",cValue);
	}
	else
	{
		printf("%c is not digit\n",cValue);
	}
	
	return 0;
}