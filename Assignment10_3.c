// Accept distance in kilometer and convert it into meter

#include<stdio.h>

int KMtoMeter(int iNo)
{
	int iMeter = 0;
	iMeter = iNo * 1000;
	
	return iMeter;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter distance in Kilometer\n");
	scanf("%d",&iValue);
	
	iRet = KMtoMeter(iValue);
	printf("Distance in meter is : %d\n",iRet);
	
	return 0;
}