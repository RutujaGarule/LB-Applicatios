// Accept number and count digits in between 3 and 7

#include<stdio.h>

int CountRange(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit > 3)&&(iDigit < 7))
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()
{
	int iValue= 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CountRange(iValue);
	printf("Number of digits is : %d\n",iRet);
	
	return 0;
}