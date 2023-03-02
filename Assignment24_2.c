// accept character.If it is small display its corresponding capital letter
// If it is capital display its corresponding small letter
// In other case display it as it is

#include<stdio.h>

void Display(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
	{
		printf("%c\n",(ch - 32));
	}
	else if((ch >= 'A') && (ch <= 'Z'))
	{
		printf("%c\n",(ch + 32));
	}
	else
	{
		printf("%c\n",ch);
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}
