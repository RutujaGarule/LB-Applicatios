// Accept number and check it contains 0 or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			return TRUE;
		}
		iNo = iNo / 10;
	}
	return FALSE;
}

int main()
{
	int iValue= 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == TRUE)
	{
		printf("It contains Zero\n");
	}
	else
	{
		printf("There is no Zero\n");
	}
	
	return 0;
}