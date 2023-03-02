// Write a recursive program which display below pattern
// *	*	*	*	*

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt <= iNo)
	{
		printf("*\t");
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