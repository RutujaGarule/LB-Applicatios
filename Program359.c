#include<stdio.h>

int StrlenX(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	int Ret = 0;
	char Arr[30];
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	Ret = StrlenX(Arr);
	printf("String length is : %d\n",Ret);
	
}