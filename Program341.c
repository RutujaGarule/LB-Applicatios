#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT Pos)
{
	UINT iMask = 0X00000001;
	UINT Result = 0;
	
	if((Pos < 1) || (Pos > 32))
	{
		printf("Invalid position,it should be in between 1 to 32\n");
		return false;
	}
	
	iMask = iMask << (Pos - 1);
	
	Result = iNo & iMask;
	if(Result == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	UINT Value = 0;
	UINT Position = 0;
	bool bRet = false;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	printf("Enter the position of bit : \n");
	scanf("%d",&Position);
	
	bRet = CheckBit(Value,Position);
	
	if(bRet == true)
	{
		printf("Bit at the position %d is ON\n",Position);
	}
	else
	{
		printf("Bit at the position %d is OFF\n",Position);

	}
	
	return 0;
}