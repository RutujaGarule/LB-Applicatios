// check number is palindrome or not

#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(int iNo)
{
	int iRev = 0;
	int iDigit = 0;
	
	int iTemp = iNo;
	
	for(iDigit=0,iRev=0 ;iNo!=0; iNo = iNo / 10)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;

	}
	
	if(iRev == iTemp)
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
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	bRet = ChkPalindrome(iValue);
	if(bRet == true)
	{
		printf("%d is palindrome number\n",iValue);
	}
	else
	{
		printf("%d is not palindrome Number\n",iValue);
	}
	
	
	return 0;
}