//Accept character and check whether it is small case or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckSmall(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
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
	
	bRet = CheckSmall(cValue);
	if(bRet == TRUE)
	{
		printf("%c is small case\n",cValue);
	}
	else
	{
		printf("%c is not small case\n",cValue);
	}
	
	return 0;
}