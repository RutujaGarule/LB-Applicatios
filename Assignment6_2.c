// Accept number and check number is greater than 100 or not

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
	if(iNo > 100)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet = ChkGreater(iValue);
	
	if(bRet == TRUE)
	{
		printf("%d is greater than 100\n",iValue);
	}
	else
	{
		printf("%d is not greater than 100\n",iValue);
	}
	
	return 0;
}


