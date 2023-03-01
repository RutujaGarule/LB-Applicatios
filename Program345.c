#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleRange(UINT No,UINT Start,UINT End)
{
	UINT Mask1 = 0XFFFFFFFF, Mask2 = 0XFFFFFFFF ,Mask = 0, Result = 0;
	
	Mask1 = Mask1 << (Start - 1);
	Mask2 = Mask2 >> (32 - End);
	Mask = Mask1 & Mask2;
	
	Result = No ^ Mask;
	
	return Result;
}

int main()
{
	UINT Value = 0;
	UINT Start = 0;
	UINT End = 0;
	UINT Ret = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	printf("Enter starting bit position : \n");
	scanf("%d",&Start);
	printf("Enter ending bit position : \n");
	scanf("%d",&End);
	
	Ret = ToggleRange(Value,Start,End);
	
	printf("Updated number is : %d\n",Ret);
	
	return 0;
}