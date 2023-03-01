
#include<stdio.h>
#include<stdlib.h>

void Summation(int Arr[],int iSize)
{
	int iCnt = 0;
	int iEvenSum = 0;
	int iOddSum = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if((Arr[iCnt] % 2)== 0)
		{
			iEvenSum = iEvenSum + Arr[iCnt];
		}
		else
		{
			iOddSum = iOddSum + Arr[iCnt];
		}
	}
	printf("Addition is even elements is : %d\n",iEvenSum);
	printf("Addition is odd elements is : %d\n",iOddSum);
	
}


int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iCnt = 0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Summation(ptr,iLength);
	
	free(ptr);
	
	return 0;
}