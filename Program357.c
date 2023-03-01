#include<stdio.h>

int CountDigit(int iNo)
{
	static int Count = 0;
	int Digit = 0;
	
	if(iNo != 0)
	{
		Digit = iNo % 10;
		Count++;
		iNo = iNo / 10;
		CountDigit(iNo);
	}
	return Count;
}

int main()
{
	int Value = 0;
	int Ret = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	Ret = CountDigit(Value);
	
	printf("Count of digits is : %d\n",Ret);
}