// Accept two numbers from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
	int i = 0;
	
	if(iFrequency < 0)
	{
		iFrequency = -iFrequency;
	}
	
	for(i = 1; i <= iFrequency;i++)
	{
		printf("%d ",iNo);
	}
}

int main()
{
	int iValue = 0;
	int iCnt = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter frequency\n");
	
	scanf("%d",&iCnt);
	
	Display(iValue,iCnt);
	
	
	return 0;
}