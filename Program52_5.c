// Write a program which accepts one number from user and range of positions from user.
// Toggle all bits from that range.

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No,UINT Pos1, UINT Pos2)
{
	UINT Mask1 = 0XFFFFFFFF;
	UINT Mask2 = 0XFFFFFFFF;
	UINT Mask = 0;
	UINT Result = 0;
	
	Mask1 = Mask1 << (Pos1 - 1);
	Mask2 = Mask2 >> (32 - Pos2);
	Mask = Mask1 & Mask2;
	
	Result = No ^ Mask;
	
	return Result;
}


int main()
{
	UINT Value = 0;
	UINT Position1 = 0, Position2 = 0;
	UINT Ret = 0;
	
	printf("Enter Number :\n");
	scanf("%d",&Value);
	printf("Enter starting position : \n");
	scanf("%d",&Position1);
	printf("Enter ending position : \n");
	scanf("%d",&Position2);
	
	Ret = ToggleBit(Value,Position1,Position2);
	
	printf("Updated number is : %d\n",Ret);
	
	return 0;
}