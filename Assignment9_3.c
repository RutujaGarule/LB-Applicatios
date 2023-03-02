// find even factorial

#include<stdio.h>

int EvenFactorial(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iFact = 1;
	int iEvenCnt = 0;
	
	for(iEvenCnt = 1;iEvenCnt <= iNo;iEvenCnt++)
	{
		if(iEvenCnt % 2 == 0)
		{
			iFact = iFact * iEvenCnt;
		}
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = EvenFactorial(iValue);
	printf("Even Factorial of Number is : %d\n",iRet);
	
	return 0;
}