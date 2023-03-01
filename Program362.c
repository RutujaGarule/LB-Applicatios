#include<stdio.h>

int CountSmall(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
		CountSmall(str);
	}
	return iCnt;
}

int main()
{
	int Ret = 0;
	char Arr[30];
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	Ret = CountSmall(Arr);
	printf("small count is : %d\n",Ret);
	
}