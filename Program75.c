
#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int Arr[],int iSize,int iNo)
{
	int iCnt = 0;
	int iFreq = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iFreq++;
		}
	}
	return iFreq;
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iCnt = 0;
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the number to find frequency\n");
	scanf("%d",&iValue);
	
	iRet = CalculateFrequency(ptr,iLength,iValue);
	printf("Frequency of %d is : %d\n",iValue,iRet);
	
	free(ptr);
	
	return 0;
}