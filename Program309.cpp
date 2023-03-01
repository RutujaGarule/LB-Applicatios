
#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[],int iSize)
{
	int iCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";
	}
}

int main()
{
	int Data[] = {10,20,30,40};
	Display(Data,4);
	
	char Datac[] = {'A','B','C','D'};
	Display(Datac,4);
	
	return 0;
}