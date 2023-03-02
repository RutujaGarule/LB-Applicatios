// Write a program which accept one number from user 
// Check whether 9th or 12th bit is ON or OFF.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define BOOL int
typedef unsigned int UINT;

// 0000  0000  0000  0000  0000  0000  0000  0000
// 0000  0000  0000  0000  0000  0001  0000  0000
// 00000100

// 0000  0000  0000  0000  0000  1000  0000  0000
// 00000800


BOOL CheckBit(UINT No)
{
	UINT Mask1 = 0X00000100;
	UINT Mask2 = 0X00000800;
	UINT Result = 0;
	
	if((No & Mask1) == Mask1)
	{
		return TRUE;
	}
	else if((No & Mask2) == Mask2)
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
	BOOL bRet = FALSE;
	
	printf("Enter Number :\n");
	scanf("%d",&Value);
	
	bRet = CheckBit(Value);
	
	if(bRet == TRUE)
	{
		printf("9th or 12th bit of %d is ON\n",Value);
	}
	else
	{
		printf("9th or 12th bit of %d is OFF\n",Value);
	}
	
	
	return 0;
}