// Accept string and convert it into upper case

#include<stdio.h>

void struprX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[30];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	struprX(Arr);		//call by address
	
	printf("String after conversion is : %s\n",Arr);
	
	return 0;
}
