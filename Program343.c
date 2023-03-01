#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// Toggle alternate nibble
// 0000  0000  0000  0000  0000  0000  0000  0000
// 0000  1111  0000  1111  0000  1111  0000  1111
// 0F0F0F0F
// 0X0F0F0F0F

UINT ToggleBit(UINT iNo)
{
	UINT iMask = 0X0F0F0F0F;
	UINT Result = 0;
	
	Result = iNo ^ iMask;
	
	return Result;
}


int main()
{
	UINT Value = 0;
	UINT Ret = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	Ret = ToggleBit(Value);
	
	printf("Updated number is : %d\n",Ret);
	
	return 0;
}