// Accept number and print first 5 multiple of that number 

#include<stdio.h>

void MultipleDisplay(int iNo)
{	
	int iCnt = 0;
	for(iCnt = 1;iCnt<=5;iCnt++)
	{
		printf("%d\t",(iCnt*iNo));
	}
}

int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	MultipleDisplay(iValue);

	return 0;
}


