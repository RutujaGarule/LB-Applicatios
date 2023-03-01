
#include<stdio.h>
#include<stdlib.h>

int ChkIndex(int Arr[],int iSize,int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(iCnt == iSize)
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
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = ChkIndex(ptr,iLength,iValue);
	if(iRet == -1)
	{
		printf("Index is : %d\n",iRet);
	}
	else
	{
		printf("Index is : %d\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}