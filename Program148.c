
#include<stdio.h>

char ToLower(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		return (ch+32);
	}
	else
	{
		return ch;
	}
}

int main()
{
	char cValue = '\0';
	char cRet = '\0';
	
	printf("Enter character\n");
	scanf("%c",&cValue);
	
	cRet = ToLower(cValue);
	
	printf("character in the lower case is : %c\n",cRet);
	
	return 0;
}