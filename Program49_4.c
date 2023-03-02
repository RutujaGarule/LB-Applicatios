// Write a program which checks whether 7th and 8th and 9th bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;


// 0000  0000  0000  0000  0000  0000  0000  0000
// 0000  0000  0000  0000  0000  0001  1100  0000
// 000001C0
// 0X000001C0

bool CheckBit(UINT iNo)
{
	UINT iMask = 0X000001C0;
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
		printf("7th,8th,9th bit is ON\n");
	}
	else
	{
		printf("7th,8th,9th bit is OFF\n");
	}
	
	return 0;
}