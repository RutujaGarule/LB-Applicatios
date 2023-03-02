// Write generic program to accept N values and count frequency of any specific value

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
		int Frequency(T iNo)
		{
			int iFreq = 0;
			for(int iCnt = 0;iCnt < iSize;iCnt++)
			{
				if(Arr[iCnt] == iNo)
				{
					iFreq++;
				}
			}
			return iFreq;
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
	char cValue = '\0';
	cout<<"Enter element to find frequency of that element : "<<"\n";
	cin>>cValue;
	int iRet = cobj.Frequency(cValue);
	cout<<"Frequency of "<<cValue<<" is : "<<iRet<<"\n";
	
	Number <int>iobj(iLength);
	iobj.Accept();
	iobj.Display();
	int iValue = 0;
	cout<<"Enter element to find frequency of that element : "<<"\n";
	cin>>iValue;
	iRet = iobj.Frequency(iValue);
	cout<<"Frequency of "<<iValue<<" is : "<<iRet<<"\n";
	
	Number <float>fobj(iLength);
	fobj.Accept();
	fobj.Display();
	float fValue = 0;
	cout<<"Enter element to find frequency of that element : "<<"\n";
	cin>>fValue;
	iRet = fobj.Frequency(fValue);
	cout<<"Frequency of "<<fValue<<" is : "<<iRet<<"\n";
	
	Number <double>dobj(iLength);
	dobj.Accept();
	dobj.Display();
	double dValue = 0;
	cout<<"Enter element to find frequency of that element : "<<"\n";
	cin>>dValue;
	iRet = dobj.Frequency(dValue);
	cout<<"Frequency of "<<dValue<<" is : "<<iRet<<"\n";
	
	return 0;
}