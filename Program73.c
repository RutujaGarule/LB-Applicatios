
#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddCount(int *Arr,int iSize)
{
	int iEvenCnt = 0;
	int iOddCnt = 0;
	int iCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if((Arr[iCnt]%2) == 0)
		{
			iEvenCnt++;
		}
		else
		{
			iOddCnt++;
		}
	}
	printf("Even count is : %d\n",iEvenCnt);
	printf("Odd count is : %d\n",iOddCnt);
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;

	
	printf("Enter number you want to store\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(iLength * sizeof(int));

	printf("Enter the elements\n");
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	DisplayEvenOddCount(ptr,iLength);

	
	free(ptr);
	
	return 0;
}