// Accept N numbers and return frequency of 11 from it

#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int *Arr,int iSize)
{
	int iCnt = 0;
	int iFreq = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] == 11)
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
	
	iRet = CountFrequency(ptr,iLength);
	printf("Frequency of 11 is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}