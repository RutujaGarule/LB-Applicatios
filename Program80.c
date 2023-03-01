
#include<stdio.h>
#include<stdlib.h>

void Reverse(int *Arr,int iSize)
{
	int iCnt = 0;
	for(iCnt = (iSize-1);iCnt >= 0;iCnt--)
	{
		printf("%d\t",Arr[iCnt]);
	}
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	
	printf("Enter the size of array\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(iLength * sizeof(int));
	
	printf("Enter the numbers in array\n");
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Reverse(ptr,iLength);
	
	free(ptr);
	
	
	return 0;
}
