//Accept character and check whether it is alphabet or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
	{
		return TRUE;
	}
	else if((ch >= 'A') && (ch <= 'Z'))
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
	
	bRet = Check(cValue);
	if(bRet == TRUE)
	{
		printf("%c is alphabet\n",cValue);
	}
	else
	{
		printf("%c is not alphabet\n",cValue);
	}
	
	return 0;
}