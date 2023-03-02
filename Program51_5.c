// Write a program which accept one number from user
// Toggle the contents of first and last nibble of that number.
// Return modified number.
// Nibble is group of four bits

// 0000  0000  0000  0000  0000  0000  0000  0000 
// 1111  0000  0000  0000  0000  0000  0000  1111
// F000000F
// 0XF000000F


#include<stdio.h>
typedef unsigned int UINT; 


UINT ToggleNibble(UINT No)
{
	UINT iMask = 0XF000000F;
	UINT Result = 0;
	
	Result = No ^ iMask;
	
	return Result;
}


int main()
{
	UINT Value = 0;
	UINT Ret = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	
	Ret = ToggleNibble(Value);
	
	printf("Updated number is : %d\n",Ret);
	
	return 0;
} 