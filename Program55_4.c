// Write a recursive program which accept number from user and return summation of its factorial
// No = 5
// 120

#include<stdio.h>

int CountFact(int iNo)
{
	static int iFact = 1;
	
	if(iNo != 0)
	{
		iFact = iFact * iNo;
		iNo--;
		CountFact(iNo);
	}
	return iFact;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Number : \n");
	scanf("%d",&iValue);
	
	iRet = CountFact(iValue);
	printf("Factorial of %d is : %d\n",iValue,iRet);
	
	
	return 0;
}