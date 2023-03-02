// Accept N numbers and display all such numbers which contains 3 digits


#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr,int iSize)
{
	int iCnt = 0;
	int iCnt1 = 0;
	int iDigit = 0;
	int iTemp = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		iTemp = Arr[iCnt];
		iCnt1 = 0;
		while(Arr[iCnt] != 0)
		{
			iDigit = Arr[iCnt] % 10;
			iCnt1++;
			Arr[iCnt] = Arr[iCnt] / 10;
		}
		if(iCnt1 == 3)
		{
			printf("%d\t",iTemp);
		}
	}
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	
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
	
	Display(ptr,iLength);
	
	free(ptr);
	
	return 0;
}