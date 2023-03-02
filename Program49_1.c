// Write a program which checks whether 15th bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

// 15th bit
// 0000  0000  0000  0000  0000  0000  0000  0000
// 0000  0000  0000  0000  0100  0000  0000  0000
// 00004000
// 0X00004000

bool CheckBit(UINT iNo)
{
	UINT iMask = 0X00004000;
	UINT Result = 0;
	
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
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	bRet = CheckBit(iValue);
	
	if(bRet == true)
	{
		printf("15th bit is ON\n");
	}
	else
	{
		printf("15th bit is OFF\n");
	}
	
	return 0;
}