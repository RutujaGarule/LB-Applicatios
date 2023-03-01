#include<stdio.h>

void DisplayFactors (int iNo)
{
	int iCnt = 1;
	
	while(iCnt <= iNo/2)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\t",iCnt);
		}
		iCnt++;
	}
}

int main()
{
	int Value = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	DisplayFactors(Value);
	
	return 0;
}