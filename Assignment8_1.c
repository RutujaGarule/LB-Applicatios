// Accept number and if number is less than 50 then print small and if greater than 50 and less than 100 then print medium 
//and if it is greater than 100 print large

#include<stdio.h>

void Number(int iNo)
{
	if(iNo < 50)
	{
		printf("Number is small\n");
	}		
	if((iNo > 50)&&(iNo < 100))
	{
		printf("Number is Medium\n");
	}	
	if(iNo > 100)
	{
		printf("Number is Large");
	}	
}

int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Number(iValue);
	
	return 0;
}