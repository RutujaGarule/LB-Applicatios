// Accept N numbers and return difference between largest number and smallest number


#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iSize)
{
	int iCnt = 0;
	int iMax = Arr[0];
	int iMin = Arr[0];
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
			
		}
		
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	
	return (iMax-iMin);
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
	
	iRet = Difference(ptr,iLength);
	printf("difference between largest number and smallest number : %d\n",iRet);

	free(ptr);
	
	return 0;
}