// Accept N numbers and accept one another no as NO
// and return index of last occurrence of that NO 

#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int *Arr,int iSize,int iNo)
{
	int iCnt = -1;
	
	for(iCnt = (iSize-1);iCnt>=0;iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	return iCnt;
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
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
	
	iRet = LastOccurence(ptr,iLength,iValue);
	if(iRet == -1)
	{
		printf("There is no such number : %d\n",iRet);
	}
	else
	{
		printf("Last occurence of %d is : %d\n",iValue,iRet);
	}
	
	free(ptr);
	
	return 0;
}