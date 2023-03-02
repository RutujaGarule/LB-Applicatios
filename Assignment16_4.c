// Accept N numbers and accept range from user
// and display all elements from that range

#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr,int iSize,int iStart,int iEnd)
{
	int iCnt = 0;
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if((Arr[iCnt]>iStart) && (Arr[iCnt]<iEnd))
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iValue1 = 0;
	int iValue2 = 0;
	
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
	
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	printf("Enter sending point\n");
	scanf("%d",&iValue2);
	
	Display(ptr,iLength,iValue1,iValue2);
	
	free(ptr);
	
	return 0;
}