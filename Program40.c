// accept number and display in decreasing order using while loop



#include<stdio.h>

void DisplayReverse(int iNo)
{
	int iCnt = 0;
	
	printf("_________________________________________\n");
	
	iCnt = iNo;
	while(iCnt >=1)
	{
		printf("%d\t",iCnt);
		iCnt--;
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