#include<stdio.h>

int Summation(int iNo)
{
	int iCnt = 1;
	int iSum = 0;
	
	while(iCnt <= iNo)
	{
		iSum = iSum + iCnt;
		iCnt++;
	}
	return iSum;
}

int main()
{
	int Value = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	iRet = Summation(Value);
	printf("Summation is : %d\n",iRet);
	
	return 0;
}