// Write a recursive program which accept number from user and return product of its digits
// No = 879
// 24

#include<stdio.h>

int ProductDigits(int iNo)
{
	int iDigit = 0;
	static int iMult = 1;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iMult = iMult * iDigit;
		iNo = iNo / 10;
		ProductDigits(iNo);
	}
	return iMult;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Number : \n");
	scanf("%d",&iValue);
	
	iRet = ProductDigits(iValue);
	printf("Product of Digits of %d is : %d\n",iValue,iRet);
	
	
	return 0;
}