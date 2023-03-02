// find odd factorial

#include<stdio.h>

int OddFactorial(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iFact = 1;
	int iOddCnt = 0;
	
	for(iOddCnt = 1;iOddCnt <= iNo;iOddCnt++)
	{
		if(iOddCnt % 2 != 0)
		{
			iFact = iFact * iOddCnt;
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
	
	iRet = OddFactorial(iValue);
	printf("Odd Factorial of Number is : %d\n",iRet);
	
	return 0;
}