// Accept number of rows and column
//row = 3
//column = 5
/*
	5	4	3	2	1
	5	4	3	2	1
	5	4	3	2	1

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt = 0;
	int iCnt1 = 0;
	
	for(iCnt= 1;iCnt<=iRow;iCnt++)
	{
		for(iCnt1= iCol;iCnt1>0;iCnt1--)
		{
			printf("%d\t",iCnt1);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter the number of rows\n");
	scanf("%d",&iValue1);
	printf("Enter the number of column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}