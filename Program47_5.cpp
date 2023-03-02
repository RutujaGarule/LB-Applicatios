// Write generic program to accept N values from user and return largest values

#include<iostream>
using namespace std;

template <class T>
class Numbers
{
	public:
		T * Arr;
		int iSize;
		
		Numbers(int i)
		{
			iSize = i;
			Arr = new T[iSize];
		}
		
		void Accept()
		{
			cout<<"Enter the elements of array : "<<"\n";
			for(int iCnt = 0; iCnt < iSize;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}
		
		void Display()
		{
			cout<<"elements of array are : "<<"\n";
			for(int iCnt = 0; iCnt < iSize;iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";
			}
			cout<<"\n";
		}
		
		T Largest()
		{
			T Max = Arr[0];
			for(int iCnt = 0;iCnt<iSize;iCnt++)
			{
				if(Arr[iCnt] > Max)
				{
					Max = Arr[iCnt];
				}
			}
			return Max;
		}
};

int main()
{
	int iLength = 0;
	cout<<"Enter the size of array : "<<"\n";
	cin>>iLength;
	
	Numbers <int>iobj(iLength);
	iobj.Accept();
	iobj.Display();
	int iRet = iobj.Largest();
	cout<<"Largest elements is : "<<iRet<<"\n";
	
	Numbers <float>fobj(iLength);
	fobj.Accept();
	fobj.Display();
	float fRet = fobj.Largest();
	cout<<"Largest elements is : "<<fRet<<"\n";
	
	Numbers <double>dobj(iLength);
	dobj.Accept();
	dobj.Display();
	double dRet = dobj.Largest();
	cout<<"Largest elements is : "<<dRet<<"\n";
	
	return 0;
}