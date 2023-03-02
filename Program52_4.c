// Write a program which accept one number and two positions from user
// Check whether bit at first or bit at second position is ON or OFF

#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define BOOL int
typedef unsigned int UINT;


BOOL CheckBit(UINT No,UINT Pos1,UINT Pos2)
{
	UINT Mask1 = 0X00000001;
	UINT Mask2 = 0X00000001;
	
	Mask1 = Mask1 << (Pos1 - 1);
	Mask2 = Mask2 << (Pos2 - 1);
	
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
	UINT Position1 = 0, Position2 = 0;
	BOOL bRet = FALSE;
	
	printf("Enter Number :\n");
	scanf("%d",&Value);
	printf("Enter first position : \n");
	scanf("%d",&Position1);
	printf("Enter second position : \n");
	scanf("%d",&Position2);
	
	bRet = CheckBit(Value,Position1,Position2);
	
	if(bRet == TRUE)
	{
		printf("Bit at Position %d or %d is ON\n",Position1,Position2);
	}
	else
	{
		printf("Bit at Position %d or %d is OFF\n",Position1,Position2);
	}
	
	return 0;
}