// Accept number and display its table


#include<stdio.h>

void DisplayTable(int iNo)
{
	int iCnt = 0;
	
	printf("Table of %d is : \n",iNo);
	printf("_______________________\n");
	for(iCnt = 1; iCnt<=10; iCnt++)
	{
		printf("%d\n",iNo*iCnt);
	}
	printf("_______________________\n");
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	
	
	return 0;
}