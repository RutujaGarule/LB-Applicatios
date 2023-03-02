// Accept number and count frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
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
		if(iDigit == 4)
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
	
	iRet = CountFour(iValue);
	printf("Frequency of Four is : %d\n",iRet);
	
	return 0;
}