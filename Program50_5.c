// Write a program which accept one number from user and ON its first 4 bits
// Return modified number

#include<stdio.h>
typedef unsigned int UINT;

// 0000  0000  0000  0000  0000  0000  0000  0000
// 0000  0000  0000  0000  0000  0000  0000  1111
// 0000000F
// 0X0000000F



UINT ToggleBit(UINT iNo)
{
	UINT iMask = 0X0000000F;
	UINT iResult = 0;
	
	iResult = iMask | iNo;
	
	return iResult;
}


int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = ToggleBit(iValue);
	
	printf("Updated number is : %d\n",iRet);
	
	return 0;
}