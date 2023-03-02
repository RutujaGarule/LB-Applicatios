// Accept number of rows and column
//row = 3
//column = 4
/*
	1	2	3	4
	5	6	7	8
	9	10	11	12

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt = 0;
	int iCnt1 = 1;
	
	for(iCnt= 1;iCnt<=iRow;iCnt++)
	{
		for(;iCnt1<=iCol;iCnt1++)
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