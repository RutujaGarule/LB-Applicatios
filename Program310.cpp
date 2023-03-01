
#include<iostream>
using namespace std;

template <class T>
T Add(T Arr[],int iSize)
{
	int iCnt = 0;
	T Sum;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		Sum = Sum + Arr[iCnt];
	}
	return Sum;
}

int main()
{
	int iRet = 0,dRet = 0.0;
	
	int Data[] = {10,20,30,40};
	iRet = Add(Data,4);
	cout<<"Addition is : "<<iRet<<"\n";
	
	double Datad[] = {10.1,20.2,30.3,40.4};
	dRet = Add(Datad,4);
	cout<<"Addition is : "<<dRet<<"\n";
	
	return 0;
}