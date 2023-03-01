// accept number and display in decreasing order



#include<stdio.h>

void DisplayReverse(int iNo)
{
	int iCnt = 0;
	
	printf("_________________________________________\n");
	for(iCnt = iNo; iCnt >=1 ; iCnt--)
	{
		printf("%d\t",iCnt);
	}
	printf("\n________________________________________\n");
}

int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayReverse(iValue);
	
	
	
	return 0;
}