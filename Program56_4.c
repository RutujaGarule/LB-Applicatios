// Write recursive program which accept number from user and return smallest digit
// 87983
// 9

#include<stdio.h>

int MinDigit(int iNo)
{
	static int iMin = 9;
	int iDigit = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit < iMin)
		{
			iMin = iDigit;
		}
		iNo = iNo / 10;
		MinDigit(iNo);
	}
	return iMin;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = MinDigit(iValue);
	printf("smallest digit is : %d\n",iRet);
	
	
	return 0;
}