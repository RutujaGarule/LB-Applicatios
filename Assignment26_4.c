// Accept string and display only digits from that string

#include<stdio.h>

void DisplayDigit(char *str)
{
	while(*str != '\0')
	{
		if((*str >='0') && (*str <='9'))
		{
			printf("%c",*str);
		}
		str++;
	}
}

int main()
{
	char Arr[30];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	DisplayDigit(Arr);		//call by address
	
	return 0;
}
