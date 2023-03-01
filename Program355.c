#include<stdio.h>

int AddFactorsR(int iNo)
{
	static int iCnt = 1;
	static int iSum = 0;
	
	if(iCnt <= iNo/2)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
		iCnt++;
		AddFactorsR(iNo);
	}
	return iSum;
}

int main()
{
	int Value = 0;
	int Ret = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	Ret = AddFactorsR(Value);
	printf("Addition is : %d\n",Ret);
	
	return 0;
}