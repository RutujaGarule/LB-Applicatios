// Accept N numbers and return smallest number


#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr,int iSize)
{
	int iCnt = 0;
	int iMin = Arr[0];
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
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
	
	iRet = Minimum(ptr,iLength);
	printf("Smallest number is : %d\n",iRet);

	free(ptr);
	
	return 0;
}