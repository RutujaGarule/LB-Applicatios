// Accept string and check it contains vowels in it or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0;
typedef int BOOL;

BOOL ChkVowel(char *str)
{	
	BOOL bFlag = FALSE;
	
	while(*str != '\0')
	{	
		if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') ||(*str == 'u'))
		{
			bFlag = TRUE;
			break;
		}
		str++;
	}
	return bFlag;
	
}

int main()
{
	char Arr[20];
	BOOL bRet = FALSE;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet = ChkVowel(Arr);
	if(bRet == TRUE)
	{
		printf("Vowel is present\n");
	}
	else
	{
		printf("Vowel is not present\n");
	}
	
	return 0;
}
