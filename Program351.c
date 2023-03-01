#include<stdio.h>

int SummationR(int iNo)
{
	static int iCnt = 1;
	static int iSum = 0;
	
	if(iCnt <= iNo)
	{
		iSum = iSum + iCnt;
		iCnt++;
		SummationR(iNo);
	}
	return iSum;
}

int main()
{
	int Value = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	iRet = SummationR(Value);
	printf("Summation is : %d\n",iRet);
	
	return 0;
}