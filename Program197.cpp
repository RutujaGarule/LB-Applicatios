#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int * Arr;
		int iSize;
		
	ArrayX(int i)
	{
		iSize = i;
		Arr = new int[iSize];
	}
	
	~ArrayX()
	{
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
	
};

int main()
{
	ArrayX obj(5);
	
	obj.Accept();
	obj.Display();
	
	return 0;
}