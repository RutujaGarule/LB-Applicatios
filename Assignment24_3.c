// accept character.If it is capital the display all the characters from input character til Z
//If input character is small then print all the character in reverse order till a
// In other case return directly
#include<stdio.h>

void Display(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
	{
		while(ch >= 'a')
		{
			printf("%c\t",ch);
			ch--;
		}
	}
	else if((ch >= 'A') && (ch <= 'Z'))
	{
		while(ch <= 'Z')
		{
			printf("%c\t",ch);
			ch++;
		}
	}
	else
	{
		return;
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
