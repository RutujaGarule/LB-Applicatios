//Problem statement :Accept number from user and check whethe it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFive(int iNo)
{
	int iAns = 0;
	iAns = iNo % 5;
	
	if(iAns == 0)
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
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet = DivisibleByFive(iValue);
	
	if(bRet == false)
	{
		printf("%d is not divisible by 5\n",iValue);
	}
	else
	{
		printf("%d is divisible by 5\n",iValue);
	}

	return 0;
}
