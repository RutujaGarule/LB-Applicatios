// Accept number and return multplication of all its digits

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit = 0;
	int iMult = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			iDigit = 1;
		}
		iMult = iMult * iDigit;
	
		iNo = iNo / 10;
	}
	return iMult;
}

int main()
{
	int iValue= 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = MultDigits(iValue);
	printf("Multilpication of digits is : %d\n",iRet);
	
	return 0;
}