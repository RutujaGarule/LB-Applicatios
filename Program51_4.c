// Write a program which accept one number and position from user
// toggle bit at that position and return modified number
 

#include<stdio.h>
typedef unsigned int UINT; 


UINT ToggleBit(UINT No, UINT Pos)
{
	UINT iMask = 0X00000001;
	UINT Result = 0;
	
	iMask = iMask << (Pos-1);
	
	Result = No ^ iMask;
	return Result;
}


int main()
{
	UINT Value = 0;
	UINT Position = 0;
	UINT Ret = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	printf("Enter Position : \n");
	scanf("%d",&Position);
	
	Ret = ToggleBit(Value,Position);
	
	printf("Updated number is : %d\n",Ret);
	
	return 0;
} 