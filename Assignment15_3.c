// Accept N numbers and check that number contains 11 or not

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int *Arr,int iSize)
{
	int iCnt = 0;
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			break;
		}
	}
	if(iCnt == iSize)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	BOOL bRet = FALSE;
	
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
	
	bRet = Check(ptr,iLength);
	if(bRet == FALSE)
	{
		printf("11 is not present\n");
	}
	else
	{
		printf("11 is present\n");
	}
	
	free(ptr);
	
	return 0;
}