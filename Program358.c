#include<stdio.h>

int SumDigits(int iNo)
{
	int Digit = 0;
	static int iSum = 0;
	
	if(iNo != 0)
	{
		Digit = iNo % 10;
		iSum = iSum + Digit;
		iNo = iNo / 10;
		SumDigits(iNo);
	}
	return iSum;
}

int main()
{
	int Value = 0;
	int Ret = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	Ret = SumDigits(Value);
	
	printf("summation of digits is : %d\n",Ret);
}