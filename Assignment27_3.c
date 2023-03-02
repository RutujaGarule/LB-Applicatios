// Accept string and accept one character from user
// return index of first occurence of that character

#include<stdio.h>

int ChkIndex(char *str,char ch)
{	
	int i = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		str++;
		i++;
	}
	if(*str == '\0')
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int main()
{
	char Arr[20];
	char cValue = '\0';
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	printf("Enter one character\n");
	scanf(" %c",&cValue);
	
	iRet = ChkIndex(Arr,cValue);
	
	printf("%c is found at index %d\n",cValue,iRet);
	
	return 0;
}
