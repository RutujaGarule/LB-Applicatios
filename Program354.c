#include<stdio.h>

void DisplayFactorsR(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt <= iNo/2)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\t",iCnt);
		}
		iCnt++;
		DisplayFactorsR(iNo);
	}
}

int main()
{
	int Value = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	DisplayFactorsR(Value);
	
	return 0;
}