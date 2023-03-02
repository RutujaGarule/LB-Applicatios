//Accept range and display all even numbers between range

#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
	if(iStart > iEnd)
	{
		printf("Invalid range\n");
	}
	
	int iCnt = 0;
	for(iCnt = iStart;iCnt <= iEnd;iCnt++)
	{
		if(iCnt % 2 == 0)
		{
		printf("%d\t",iCnt);
		}
	}
}


int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter Starting point\n");
	scanf("%d",&iValue1);
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	
	RangeDisplayEven(iValue1,iValue2);
	
	return 0;
}