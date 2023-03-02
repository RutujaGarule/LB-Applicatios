// Write a program which accept one number from user
// Count number of ON(1) bits in it without using % and / operator.
 
// 0000  0000  0000  0000  0000  0000  0000  0000
// 0000  0000  0000  0000  0000  0000  0000  0001
// 00000001
// 0X00000001

#include<stdio.h>
typedef unsigned int UINT;

UINT CountOnBits(UINT No)
{
	UINT iMask = 0X00000001;
	UINT Count = 0;
	
	while(No != 0)
	{
		if((No & iMask) == iMask)
		{
			Count++;
		}
		No = No >> 1;
	}
	return Count;
}


int main()
{
	UINT Value = 0;
	UINT Ret = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	
	Ret = CountOnBits(Value);
	
	printf("Number of ON bits in %d is : %d\n",Value,Ret);
	
	
	return 0;
}