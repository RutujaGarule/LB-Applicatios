#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int * Arr;
		int iSize;
		
	ArrayX(int i)
	{
		cout<<"Allocating memory for resources..."<<"\n";
		iSize = i;
		Arr = new int[iSize];
	}
	
	~ArrayX()
	{
		cout<<"Deallocating memory for resources..."<<"\n";
		delete []Arr;
	}
	
	void Accept()
	{
		int iCnt = 0;
		
		cout<<"Enter the elements : "<<"\n";
		for(iCnt = 0;iCnt < iSize;iCnt++)
		{
			cin>>Arr[iCnt];
		}
	}
	
	void Display()
	{
		int iCnt = 0;
		
		cout<<"elements of array are : "<<"\n";
		for(iCnt = 0;iCnt < iSize;iCnt++)
		{
			cout<<Arr[iCnt]<<"\t";
		}
		cout<<"\n";
	}
	
	int Minimum()
	{
		int iCnt = 0;
		int iMin = Arr[0];
		
		for(iCnt = 0;iCnt < iSize;iCnt++)
		{
			if(Arr[iCnt] < iMin)
			{
				iMin = Arr[iCnt];
			}
		}
		return iMin;
	}
	
};

int main()
{
	int iLength = 0;
	int iRet = 0;
	
	cout<<"Enter size of array : "<<"\n";
	cin>>iLength;
	
	ArrayX * obj = new ArrayX(iLength);
	
	obj->Accept();
	obj->Display();
	
	iRet = obj->Minimum();
	cout<<"Minimum number is : "<<iRet<<"\n";
	
	delete obj;
	
	return 0;
}