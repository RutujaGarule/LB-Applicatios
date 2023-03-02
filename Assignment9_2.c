// Accept number in US dollar and conver it into indian currency

#include<stdio.h>

int DollerToINR(int iNo)
{
	int iINR =0;
	iINR = iNo * 70;
	return iINR;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number in USD\n");
	scanf("%d",&iValue);
	
	iRet = DollerToINR(iValue);
	printf("Valur in INR is : %d\n",iRet);
	
	return 0;
}