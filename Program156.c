
#include<stdio.h>

void strcpySmallX(char *src,char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <='Z'))
		{
			*dest = *src + 32;
		}
		else
		{
			*dest = *src;
		}
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
	
	strcpySmallX(Arr,Brr);
	
	printf("copied string is : %s\n",Brr);
	printf("original string is : %s\n",Arr);
	
	return 0;
}