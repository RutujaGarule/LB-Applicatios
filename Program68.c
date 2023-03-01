//accept number and perform addition

#include<stdio.h>

int Summation(int Data[],int iSize)
{
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		iSum = iSum + Data[iCnt];
	}
	return iSum;
}


int main()
{
	int iRet = 0;
	int Arr[5];
	int iCnt = 0;
	
	printf("Enter the elements : \n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	printf("Enter the elements : \n");
	for(iCnt = 0;iCnt< 5;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
	
	iRet = Summation(Arr,5);
	printf("Summation is : %d\n",iRet);
	
	return 0;
}




