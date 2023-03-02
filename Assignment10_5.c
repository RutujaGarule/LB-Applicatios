// Accept area in square feet and convert into square meter

#include<stdio.h>

double SquareMeter(int iNo)
{
	double dMeter = 0.0;
	dMeter = iNo * 0.0929;
	
	return dMeter;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;
	
	printf("Enter area in square meter\n");
	scanf("%d",&iValue);
	
	dRet = SquareMeter(iValue);
	printf("Area in square meter is : %lf\n",dRet);
	
	return 0;
}