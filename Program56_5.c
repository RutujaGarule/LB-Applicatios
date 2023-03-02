// Write recursive program which accept number from user and return its reverse number
// 523
// 325

#include<stdio.h>

int ReverseNumber(int iNo)
{
	int iDigit = 0;
	static int temp = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		temp = iDigit + (temp*10);
		iNo = iNo /10;
		ReverseNumber(iNo);
	}
	return temp;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = ReverseNumber(iValue);
	printf("Reverse Number is : %d\n",iRet);
	
	
	return 0;
}