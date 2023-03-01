#include<stdio.h>

int CountCapital(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
		CountCapital(str);
	}
	return iCnt;
}

int main()
{
	int Ret = 0;
	char Arr[30];
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	Ret = CountCapital(Arr);
	printf("capital count is : %d\n",Ret);
	
}