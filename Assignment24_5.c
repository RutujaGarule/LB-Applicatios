// accept character and display its ASCII value in decimal,octal and hexadecimal format

#include<stdio.h>

void Display(char ch)
{
	printf("%d\t%o\t%x",ch,ch,ch);
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}
