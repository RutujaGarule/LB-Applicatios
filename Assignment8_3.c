// Accept number and find factorial

#include<stdio.h>

int Factorial(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iFact = 1;
	int iCnt = 0;
	
	for(iCnt = iNo;iCnt >= 1;iCnt--)
	{
		iFact = iFact * iCnt;
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	printf("Factorial of %d is : %d\n",iValue,iRet);
	
	return 0;
}