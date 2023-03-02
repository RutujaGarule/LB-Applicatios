// Display ASCII table. 
//table contains symobol,decimal,hexadecimal,octal representation of every
//member from 0 to 255

#include<stdio.h>

int main()
{
	int i = 0;
	
	for(i = 0;i <= 255;i++)
	{
		printf("%d\t%c\t%x\t\n",i,i,i);
	}
	
	return 0;
}
