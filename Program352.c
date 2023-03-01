#include<stdio.h>

int Factorial(int iNo)
{
	static int iCnt = 1;
	static int iFact = 1;
	
	if(iCnt <= iNo)
	{
		iFact = iFact * iCnt;
		iCnt++;
		Factorial(iNo);
	}
	return iFact;
}

int main()
{
	int Value = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	iRet = Factorial(Value);
	printf("Summation is : %d\n",iRet);
	
	return 0;
}