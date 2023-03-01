//Problem statement :Accept number from user and check whethe it is divisible by 5 and 3 or not

#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
	if((iNo % 3 == 0)&&(iNo % 5 == 0))
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
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	bRet = DivisibleByThreeAndFive(iValue);
	if(bRet == true)
	{
		printf("number is divisible 3 and 5\n");
	}
	else
	{
		printf("number is not divisible 3 or 5\n");
	}
	
	return 0;
}
