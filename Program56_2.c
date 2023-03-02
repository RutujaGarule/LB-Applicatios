// Write recursive program which accept number from user and return largest digit
// 87983
// 9

#include<stdio.h>

int MaxDigit(int iNo)
{
	static int iMax = 0;
	int iDigit = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		iNo = iNo / 10;
		MaxDigit(iNo);
	}
	return iMax;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = MaxDigit(iValue);
	printf("largest digit is : %d\n",iRet);
	
	
	return 0;
}