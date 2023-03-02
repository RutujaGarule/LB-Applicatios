// Accept three numbers and print multiplication
// 5	4	7 = 140
// 5	0	0 = 5
// 5	0	7 = 35

#include<stdio.h>

int Multiplication(int iNo1,int iNo2,int iNo3)
{
	if((iNo1||iNo2||iNo3) == 0)
	{
		
	}

	int iMult = 0;
	iMult = iNo1 * iNo2 * iNo3;
	return iMult;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iValue3 = 0;
	int iRet = 0;
	
	printf("Enter first numbers\n");
	scanf("%d",&iValue1);
	printf("Enter second numbers\n");
	scanf("%d",&iValue2);
	printf("Enter third numbers\n");
	scanf("%d",&iValue3);
	
	iRet = Multiplication(iValue1,iValue2,iValue3);
	printf("Multiplication is : %d\n",iRet);
	
	return 0;
}