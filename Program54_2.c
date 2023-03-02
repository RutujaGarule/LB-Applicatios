// Write a recursive program which display below pattern
// 1	2	3	4	5

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt <= iNo)
	{
		printf("%d\t",iCnt);
		iCnt++;
		Display(iNo);
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