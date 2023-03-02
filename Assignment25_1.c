// Accept string and count number of capital characters

#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountCapital(Arr);
	printf("Number of Capital letters are : %d\n",iRet);
	
	return 0;
}
