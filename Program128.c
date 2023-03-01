
#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
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
	
	bRet = ChkCapital(cValue);
	if(bRet== true)
	{
		printf("%c is capital case letter\n",cValue);
	}
	else
	{
		printf("%c is not capital case letter\n",cValue);
	}
	return 0;
}