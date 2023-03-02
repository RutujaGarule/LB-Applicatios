// Write a program which accept one number from user and toggle 7th bit of that number
// Return modified number

#include<stdio.h>
typedef unsigned int UINT;

// 0000  0000  0000  0000  0000  0000  0000  0000
// 0000  0000  0000  0000  0000  0000  0100  0000
// 00000040
// 0X00000040



UINT ToggleBit(UINT iNo)
{
	UINT iMask = 0X00000040;
	UINT iResult = 0;
	
	iResult = iMask ^ iNo;
	
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