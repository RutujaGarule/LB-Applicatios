//Accept range and display all numbers between range

#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
	if(iStart > iEnd)
	{
		printf("Invalid range\n");
	}
	
	int iCnt = 0;
	for(iCnt = iStart;iCnt <= iEnd;iCnt++)
	{
		printf("%d\t",iCnt);
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
	
	RangeDisplay(iValue1,iValue2);
	
	return 0;
}