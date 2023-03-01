
#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return (iSum / iSize);
	
}


int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iCnt = 0;
	float fRet = 0.0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	fRet = Average(ptr,iLength);
	printf("Average is : %f",fRet);
	
	free(ptr);
	
	return 0;
}