// Accept N numbers and return product of all odd elements


#include<stdio.h>
#include<stdlib.h>

int Product(int *Arr,int iSize)
{
	int iCnt = 0;
	int iMult = 1;
	
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]%2 != 0)
		{
			iMult = iMult * Arr[iCnt];
		}
	}
	if(iMult > 1)
	{
		return iMult;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iLength = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	
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
	
	iRet = Product(ptr,iLength);
	printf("Product of all odd elements is : %d\n",iRet);

	free(ptr);
	
	return 0;
}