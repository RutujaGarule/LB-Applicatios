
#include<stdio.h>

void strcpyCapitalX(char *src,char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <='z'))
		{
			*src = *src - 32;
		}
		*dest = *src;
		
		src++;
		dest++;
		
	}
	*dest = '\0';
}


int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	strcpyCapitalX(Arr,Brr);
	
	printf("copied string is : %s\n",Brr);
	
	return 0;
}