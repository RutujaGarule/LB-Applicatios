// Accept character and convert case of that character



#include<stdio.h>

void DisplayConvert(char ch)
{
	if(ch>='A')
	{
		ch = ch + 32;
		printf("%c\n",ch);
	}
	else if(ch>='a')
	{
		ch = ch - 32;
		printf("%c\n",ch);
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter character you want to convert\n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	
	return 0;
}