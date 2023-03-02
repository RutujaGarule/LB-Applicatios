// Write a recursive program which accept number from user and display below pattern
// No = 5
// 5	*	4	*	3	*	2	*	1	*

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt <= iNo)
	{
		iCnt++;
		Display(iNo);
		
		iCnt--;
		printf("%d\t*\t",iCnt,"\t");
	}
}


int main()
{
	int iValue = 0;
	
	printf("Enter the Number : \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}