// Accept one number and print that number of even numbers on screen


#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt = 0;
	
	if(iNo<=0)
	{
		return;
	}
	iCnt = 2;
	while(iCnt <= (2*iNo))
	{
		if(iCnt%2 == 0)
		{
			printf("%d\n",iCnt);
		}
		
		iCnt++;
	}
}


int main()
{
	int iValue = 0;
	
	printf("Enter numbers\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	return 0;
}