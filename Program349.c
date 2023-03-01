
#include<stdio.h>

void DisplayR(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt <= iNo)
	{
		printf("*\t");
		iCnt++;
		DisplayR(iNo);
	}
}

int main()
{
	int Value = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	DisplayR(Value);
	
	
	return 0;
}