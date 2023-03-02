// Accept N number and display elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void EvenandDivisibleByFive(int *Arr,int iSize)
{
	int iCnt = 0;
	
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2 ==0)&&(Arr[iCnt]%5 == 0))
		{
			printf("%d\t",Arr[iCnt]);
		}
		
	}
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iCnt = 0;
	
	printf("Enter the size of array\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(iLength * sizeof(int));
	if(ptr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the elements of array\n");
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	EvenandDivisibleByFive(ptr,iLength);

	free(ptr);
	
	return 0;
}