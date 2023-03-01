#include<stdio.h>
#include<stdbool.h>

bool ChkPerfect(int iNo)
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
		ChkPerfect(iNo);
	}
	if(iSum == iNo)
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
	int Value = 0;
	bool Ret = false;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	Ret = ChkPerfect(Value);
	if(Ret == true)
	{
		printf("Number is perfect\n");
	}
	else
	{
		printf("Number is not perfect\n");
	}
	return 0;
}