
#include<stdio.h>

char ToUpper(char ch)
{
	if(ch>='a' && ch<='z')
	{
		return (ch-32);
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
	
	cRet = ToUpper(cValue);
	
	printf("character in the upper case is : %c\n",cRet);
	
	return 0;
}