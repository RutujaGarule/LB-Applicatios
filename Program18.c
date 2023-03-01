// problem to display Jay Ganesh multiple times using function 
// problem to display Jay Ganesh multiple times using while loop

#include<stdio.h>

void Display(int iValue)
{
	int iCnt = 0;
	
	iCnt = 1;
	while(iCnt <= iValue)
	{
		printf("Jay Ganesh...\n");
		iCnt++;
	}
}

int main()
{
	int iNo = 0;
	
	printf("enter number of iterations :\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}