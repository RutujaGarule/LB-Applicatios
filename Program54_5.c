// Write a recursive program which display below pattern
// a	b	c	d	e	f

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	static char ch = 'a';
	
	if(iCnt <= iNo)
	{
		printf("%c\t",ch);
		ch++;
		iCnt++;
		Display(iNo);
	}
}

int main()
{	
	int Value = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	
	Display(Value);
	
	
	return 0;
}