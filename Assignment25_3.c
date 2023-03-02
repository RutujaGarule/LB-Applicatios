// Accept string and return difference between frequency of small characters and capital characters

#include<stdio.h>

int Difference(char *str)
{
	int iCnt1 = 0;
	int iCnt2 = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt1++;
		}
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt2++;
		}
		str++;
	}
	return (iCnt2-iCnt1);
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Difference(Arr);
	printf("Difference between capital and small letteres are : %d\n",iRet);
	
	return 0;
}
