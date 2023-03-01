
#include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr,int iSize)
{
	int iCnt = 0;
	int iMax = Arr[0];
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the size of array\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(iLength * sizeof(int));
	
	printf("Enter the numbers in array\n");
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Maximum(ptr,iLength);
	printf("Maximum number is : %d\n",iRet);
	
	free(ptr);
	
	
	return 0;
}
