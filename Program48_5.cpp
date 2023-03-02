// Write generic program to accept N values and reverse the contents

#include<iostream>
using namespace std;

template <class T>
class Number
{
	public:
		T * Arr;
		int iSize;
		
		Number(int i)
		{
			iSize = i;
			Arr = new T[iSize];
		}
		void Accept()
		{
			cout<<"Enter the elements of array : "<<"\n";
			for(int iCnt = 0;iCnt < iSize ;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}
		void Display()
		{
			cout<<"elements of array are : "<<"\n";
			for(int iCnt = 0;iCnt < iSize ;iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";
			}
			cout<<"\n";
		}
		void Reverse()
		{
			T * Start = NULL;
			T * End = NULL;
			T temp;
			
			Start = &Arr[0];
			End = &Arr[iSize-1];
			
			for(int iCnt = 0;iCnt < iSize/2;iCnt++)
			{
				temp = *Start;
				*Start = *End;
				*End = temp;
				Start++;
				End--;
			}
			cout<<"\n";
		}
};

int main()
{
	int iLength = 0;
	cout<<"Enter the size of array : "<<"\n";
	cin>>iLength;
	
	Number <char>cobj(iLength);
	cobj.Accept();
	cobj.Display();
	cobj.Reverse();
	cobj.Display();

	Number <int>iobj(iLength);
	iobj.Accept();
	iobj.Display();
	iobj.Reverse();
	iobj.Display();

	Number <float>fobj(iLength);
	fobj.Accept();
	fobj.Display();
	fobj.Reverse();
	fobj.Display();

	Number <double>dobj(iLength);
	dobj.Accept();
	dobj.Display();
	dobj.Reverse();
	dobj.Display();

	return 0;
}