// accept character and check whether it is special symbol or not

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
	if((ch=='!') || (ch=='@') || (ch=='#') || (ch=='$') || (ch=='%') || (ch=='^') || (ch=='&') || (ch=='*'))
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
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet = ChkSpecial(cValue);
	if(bRet == true)
	{
		printf("%c is special symbol\n",cValue);
	}
	else
	{
		printf("%c is not special character\n",cValue);
	}
	
	return 0;
}
