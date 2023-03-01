// Accept number from user and factorial of that numbers

#include<stdio.h>

int Factorial(int iNo)
{
	int iCnt = 0;
	int iFact = 1;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iFact = iFact * iCnt;
	}
	
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	printf("Factorial of %d is : %d\n",iValue,iRet);
	
	
	return 0;
}