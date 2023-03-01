#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT; 

UINT OffBit(UINT iNo,UINT Pos)
{
	UINT iMask = 0X00000001;
	UINT Result = 0;
	iMask = iMask << (Pos - 1);
	
	iMask = ~iMask;
	
	Result = iNo & iMask;
	
	return Result;
}


int main()
{
	UINT Value = 0;
	UINT Ret = 0;
	UINT Position = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	printf("Enter position : \n");
	scanf("%d",&Position);
	
	Ret = OffBit(Value,Position);
	
	printf("Updated number is : %d\n",Ret);
	
	return 0;
}