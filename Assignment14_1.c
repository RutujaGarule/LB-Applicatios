// Accept N number and return difference between summation of even and odd elements

#include<stdio.h>
#include<stdlib.h>

int DiffSummation(int *Arr,int iSize)
{
	int iEvenSum = 0,iOddSum = 0;
	int iCnt = 0;
	
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]%2 == 0)
		{
			iEvenSum = iEvenSum + Arr[iCnt];
		}
		else
		{
			iOddSum = iOddSum +Arr[iCnt];
		}
	}
	return(iEvenSum - iOddSum);
}

int main()
{
	int *ptr = NULL;
	int iRet = 0;
	int iLength = 0;
	int iCnt = 0;
	
	printf("Enter the size of array\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(iLength * sizeof(int));
	if(ptr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the elements of array\n");
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = DiffSummation(ptr,iLength);
	printf("Difference  is : %d\n",iRet);
	
	free(ptr);
		
	return 0;
}