
#include<iostream>
using namespace std;

template <class T>
T Maximium(T Arr[],int iSize)
{
	int iCnt = 0;
	T Max = Arr[0];
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] > Max)
		{
			Max = Arr[iCnt];
		}
	}
	return Max;
}

int main()
{
	int iRet = 0,dRet = 0.0;
	
	int Data[] = {110,120,320,40};
	iRet = Maximium(Data,4);
	cout<<"maximum is : "<<iRet<<"\n";
	
	double Datad[] = {10.1,20.2,30.3,50.4};
	dRet = Maximium(Datad,4);
	cout<<"maximum is : "<<dRet<<"\n";
	
	return 0;
}