// Write a program which checks whether first and last bit is ON or OFF
// First bit means bit number 1 and last bit means bit number 32

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;


// 0000  0000  0000  0000  0000  0000  0000  0000
// 1000  0000  0000  0000  0000  0000  0000  0001
// 80000001
// 0X80000001

bool CheckBit(UINT iNo)
{
	UINT iMask = 0X80000001;
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
		printf("First and Last bit is ON\n");
	}
	else
	{
		printf("First and Last bit is OFF\n");
	}
	
	return 0;
}