
#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
	if((ch >= 48) && (ch <= 57))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter one character\n");
	scanf("%c",&cValue);
	
	bRet = ChkDigit(cValue);
	if(bRet== true)
	{
		printf("%c is digit\n",cValue);
	}
	else
	{
		printf("%c is not digit\n",cValue);
	}
	return 0;
}