// Accept N numbers and accept one another no and return frequency of no from it

#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int *Arr,int iSize,int iNo)
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
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter size of array\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(iLength * sizeof(int));
	if(ptr == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	printf("Enter the elements of the array\n");
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter another number whose frequency wants to calculate\n");
	scanf("%d",&iValue);
	
	iRet = CountFrequency(ptr,iLength,iValue);
	printf("Frequency of %d is : %d\n",iValue,iRet);
	
	free(ptr);
	
	return 0;
}