// Accept number and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	int iFact = 0;
	int iNonFact = 0;
	
	for(iCnt = 1; iCnt<iNo; iCnt++)
	{
		if(iNo%iCnt == 0)
		{
			iFact = iFact + iCnt;
		}
		else if(iNo%iCnt != 0)
		{
			iNonFact = iNonFact + iCnt;
		}
	}
	iSum = iFact - iNonFact;
	
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	printf("Difference between summation of factors and non factors is : %d\n",iRet);
	
	
	return 0;
}