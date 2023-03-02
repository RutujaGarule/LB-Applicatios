// Accept N numbers and accept one another no as NO
// and check NO is present or not 

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int *Arr,int iSize,int iNo)
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
	
	printf("Enter one another number NO\n");
	scanf("%d",&iValue);
	
	bRet = Check(ptr,iLength,iValue);
	if(bRet == TRUE)
	{
		printf("%d is present\n",iValue);
	}
	else
	{
		printf("%d is not present\n",iValue);
	}

	free(ptr);
	
	return 0;
}