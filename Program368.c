#include<stdio.h>

int Summation(int Arr[],int iSize)
{	
	static int iCnt = 0;
	static int Sum = 0;
	
	if(iCnt < iSize)
	{
		Sum = Sum + Arr[iCnt];
		iCnt++;
		Summation(Arr,iSize);
	}
	return Sum;
}

int main()
{
	int Arr[5] = {10,20,30,40,50};
	int Ret = 0;
	
	Ret = Summation(Arr,5);
	printf("Addition is : %d\n",Ret);
	
}