// Write a recursive program which display below pattern
// 5	4	3	2	1

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt <= iNo)
	{
		iCnt++;
		Display(iNo);
		
		iCnt--;
		printf("%d\t",iCnt);
	}
}

int main()
{	
	int Value = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&Value);
	
	Display(Value);	
	
	return 0;
}