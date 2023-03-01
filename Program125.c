
#include<stdio.h>

int main()
{
	int i = 0;
	
	printf("ASCII Table\n");
	
	printf("Character\t Decimal\t Hex \t Octal");
	for (i = 0;i<=127;i++)
	{
		printf("%c \t %d \t %x \t %o\n",i,i,i,i);
	}
	
	return 0;
}