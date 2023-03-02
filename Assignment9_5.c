// Difference between even and off factorial

#include<stdio.h>

int FactorialDiff(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iFactEven = 1;
	int iFactOdd = 1;
	int iCnt = 0;
	int iDiff = 0;
	
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			iFactEven = iFactEven * iCnt;
		}
		if(iCnt % 2 != 0)
		{
			iFactOdd = iFactOdd * iCnt;
		}
	}
	iDiff = iFactEven - iFactOdd;
	
	return iDiff;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = FactorialDiff(iValue);
	printf("Difference between even and odd factorial is : %d\n",iRet);
	
	return 0;
}