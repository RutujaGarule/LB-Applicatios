// Write a program which accept one number from user and OFF 7th bit of that number if it is ON
// Return modified number

#include<stdio.h>
typedef unsigned int UINT;

// 0000  0000  0000  0000  0000  0000  0000  0000
// 1111  1111  1111  1111  1111  1111  1011  1111
// FFFFFFBF
// 0XFFFFFFBF



UINT OffBit(UINT iNo)
{
	UINT iMask = 0XFFFFFFBF;
	UINT iResult = 0;
	
	iResult = iMask & iNo;
	
	return iResult;
}


int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = OffBit(iValue);
	
	printf("Updated number is : %d\n",iRet);
	
	return 0;
}