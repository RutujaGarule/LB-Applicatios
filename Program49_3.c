// Write a program which checks whether 7th and 15th and 21st and 28th bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

// 0000  0000  0000  0000  0000  0000  0000  0000
// 0000  1000  0001  0000  0100  0000  0100  0000
// 08104040
// 0X08104040

bool CheckBit(UINT iNo)
{
	UINT iMask = 0X08104040;
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
		printf("7th,15th,21st and 28th bit is ON\n");
	}
	else
	{
		printf("7th,15th,21st and 28th bit is OFF\n");
	}
	
	return 0;
}