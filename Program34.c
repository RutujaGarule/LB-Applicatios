// Accept number and check number is perfect or not

#include<stdio.h>
//#include<stdbool.h>

typedef int BOOL;
#define true 1
#define false 0

int SumFactor(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 1; iCnt<=(iNo/2);iCnt++)
	{
		if(iNo%iCnt == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
	
}

BOOL ChkPerfect(int iData)
{
	int iAns = 0;
	iAns = SumFactor(iData);
	if(iAns == iData)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = false;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	bRet = ChkPerfect(iValue);
	
	if(bRet == true)
	{
		printf("%d is perfect Number \n",iValue);
	}
	else
	{
		printf("%d is not perfect Number\n",iValue);
	}
	
	return 0;
}