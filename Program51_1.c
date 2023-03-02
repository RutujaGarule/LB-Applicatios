// Write a program which accept one number and position from user
// Check whether bit at that position is ON or OFF
// If bit is one return true otherwise return false

#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define BOOL int
typedef unsigned int UINT;

BOOL CheckBit(UINT No, UINT Pos)
{
	UINT iMask = 0X00000001;
	UINT Result = 0;
	
	iMask = iMask << (Pos-1);
	Result = No & iMask;
	if(Result == iMask)
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
	UINT Value = 0;
	UINT Position = 0;
	BOOL bRet = FALSE;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	printf("Enter Position : \n");
	scanf("%d",&Position);
	
	bRet = CheckBit(Value,Position);
	if(bRet == TRUE)
	{
		printf("Bit at position %d is ON\n",Position);
	}
	else
	{
		printf("Bit at position %d is OFF\n",Position);
	}
	
	return 0;
} 