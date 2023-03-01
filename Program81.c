
#include<stdio.h>
#include<stdlib.h>

int LastIndex(int *Arr,int iSize,int iNo)
{
	int iCnt = 0;
	for(iCnt = (iSize-1);iCnt >= 0;iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(iCnt == -1)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter the size of array\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(iLength * sizeof(int));
	
	printf("Enter the numbers in array\n");
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter another number\n");
	scanf("%d",&iValue);
	
	iRet = LastIndex(ptr,iLength,iValue);
	if(iRet == -1)
	{
		printf("There is no element\n");
	}
	else
	{
		printf("Index is : %d\n",iRet);
	}
	
	free(ptr);
	
	
	return 0;
}
