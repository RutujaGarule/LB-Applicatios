// Accept string and reverse that string in place


#include<stdio.h>

void Reverse(char *str)
{	
	char *start = str;
	char *end = str;
	char temp = '\0';
	
	while(*str != '\0')
	{
		end++;
		str++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	
	printf("String after reverse is : %s\n",Arr);
	
	return 0;
}
