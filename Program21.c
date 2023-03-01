// problem to display Jay Ganesh multiple times using for loop

#include<stdio.h>

void Display(int iValue)
{
	int iCnt = 0;
	
	iCnt = 1;
	while(iCnt <= iValue)
	{
		printf("%d\n",iCnt);
		iCnt++;
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}