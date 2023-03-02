// Accept string and accept one character from user
// return index of last occurence of that character

#include<stdio.h>

int ChkIndex(char *str,char ch)
{	
	char *temp = str;
	char *end = str;
	
	while(*str != '\0')
	{
		end++;
		str++;
	}
	end--;
	
	while(end >= temp)
	{
		if(*end == ch)
		{
			break;
		}
		end--;
	}
	return(end - temp); 	// pointer arithmetic
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
