
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkNumber(int Arr[],int iSize,int iNo)
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
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iCnt = 0;
	bool bRet = false;
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
	
	bRet = ChkNumber(ptr,iLength,iValue);
	if(bRet == true)
	{
		printf("Number is present\n");
	}
	else
	{
		printf("Number is not present\n");
	}
	
	free(ptr);
	
	return 0;
}