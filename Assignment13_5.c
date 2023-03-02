// Accept number and return diffrernce between summation of even and odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
	int iEvenCnt = 0;
	int iEvenSum = 0;
	int iOddCnt = 0;
	int iOddSum = 0;
	int iDigit = 0;
	int iDiff = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit%2) == 0)
		{
			iEvenSum = iEvenSum + iDigit;
			iEvenCnt++;
		}
		else
		{
			iOddSum = iOddSum + iDigit;
			iOddCnt++;
		}
		
		iNo = iNo / 10;
	}
	iDiff = iEvenSum - iOddSum;
	
	return iDiff;
}

int main()
{
	int iValue= 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	printf("Difference is : %d\n",iRet);
	
	return 0;
}