// Accept number of rows and column
//row = 4
//column = 4
/*
	A	B	C	D
	A	B	C	D
	A	B	C	D
	A	B	C	D

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt = 0;
	int iCnt1 = 0;
	
	for(iCnt= 1;iCnt<=iRow;iCnt++)
	{
		char ch ='A';
		for(iCnt1= 1;iCnt1<=iCol;iCnt1++)
		{
			printf("%c\t",ch);
			ch++;
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