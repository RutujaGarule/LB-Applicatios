// Accept string and convert it into lower case

#include<stdio.h>

void strlwrX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[30];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);		//call by address
	
	printf("String after conversion is : %s\n",Arr);
	
	return 0;
}
