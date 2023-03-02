// Accept number of rows and column
//row = 4
//column = 5
/*
	4	4	4	4	4	
	3	3	3	3	3
	2	2	2	2	2
	1	1	1	1	1

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt = 0;
	int iCnt1 = 0;
	
	for(iCnt= iRow;iCnt>0;iCnt--)
	{
		for(iCnt1= 1;iCnt1<=iCol;iCnt1++)
		{
			printf("%d\t",iCnt);
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