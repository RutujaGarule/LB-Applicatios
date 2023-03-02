// Accept number and display its table

#include<stdio.h>

void Table(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	int iCnt = 0;
	
	for(iCnt = 1;iCnt <= 10;iCnt++)
	{
		printf("%d\t",(iCnt * iNo));
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Table(iValue);
	
	return 0;
}
