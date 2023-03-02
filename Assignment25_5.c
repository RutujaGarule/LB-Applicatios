// Accept string and display it in reverse order

#include<stdio.h>

void Reverse(char *str)
{
	char *end = NULL;
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(end >= str)
	{
		printf("%c",*end);
		end--;
		
	}
	
}

int main()
{
	char Arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	
	return 0;
}
