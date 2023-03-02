// Write a recursive program which accept number from user and return summation of its digits
// No = 879
// 24

#include<stdio.h>

int SumDigits(int iNo)
{
	int iDigit = 0;
	static int iSum = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		SumDigits(iNo);
	}
	return iSum;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Number : \n");
	scanf("%d",&iValue);
	
	iRet = SumDigits(iValue);
	printf("Summation of digits of %d is : %d\n",iValue,iRet);
	
	
	return 0;
}