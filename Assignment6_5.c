//Accept total marks and obtained marks and calculate percentage

#include<stdio.h>

float ChkPercentage(int iNo1,int iNo2)
{
	float fPer = 0.0;
	fPer = (float)(iNo2*100)/iNo1;
	
	return fPer;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	float fRet = 0.0;
	
	printf("Enter total marks\n");
	scanf("%d",&iValue1);
	printf("Enter obtained marks\n");
	scanf("%d",&iValue2);
	
	fRet = ChkPercentage(iValue1,iValue2);
	printf("Percentage is : %f\n",fRet);

	return 0;
}