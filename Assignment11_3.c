//Accept range and display addition all numbers between range

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
	if(iStart > iEnd)
	{
		return 0;
	}
	if((iStart<0)||(iEnd<0))
	{
		return 0;
	}
	
	int iCnt = 0;
	int iSum = 0;
	for(iCnt = iStart;iCnt <= iEnd;iCnt++)
	{
		iSum = iSum + iCnt;
	}
	return iSum;
}


int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;
	
	printf("Enter Starting point\n");
	scanf("%d",&iValue1);
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	
	iRet = RangeSum(iValue1,iValue2);
	if(iRet == 0)
	{
		printf("Invalid Range\n");
	}
	else
	{
		printf("Addition is : %d\n",iRet);
	}
	
	return 0;
}