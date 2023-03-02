// Write generic program to accept N values and search first occurence of any specific value 

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
		int FirstOccurence(T iNo)
		{
			int iCnt = 0;
			for(iCnt = 0;iCnt < iSize;iCnt++)
			{
				if(Arr[iCnt] == iNo)
				{
					break;
				}
			}
			if(iCnt == iSize)
			{
				return -1;
			}
			else
			{
				return iCnt;
			}
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
	cout<<"Enter element to find FirstOccurence of that element : "<<"\n";
	cin>>cValue;
	int iRet = cobj.FirstOccurence(cValue);
	cout<<"FirstOccurence of "<<cValue<<" is : "<<iRet<<"\n";
	
	Number <int>iobj(iLength);
	iobj.Accept();
	iobj.Display();
	int iValue = 0;
	cout<<"Enter element to find FirstOccurence of that element : "<<"\n";
	cin>>iValue;
	iRet = iobj.FirstOccurence(iValue);
	cout<<"FirstOccurence of "<<iValue<<" is : "<<iRet<<"\n";
	
	Number <float>fobj(iLength);
	fobj.Accept();
	fobj.Display();
	float fValue = 0;
	cout<<"Enter element to find FirstOccurence of that element : "<<"\n";
	cin>>fValue;
	iRet = fobj.FirstOccurence(fValue);
	cout<<"FirstOccurence of "<<fValue<<" is : "<<iRet<<"\n";
	
	Number <double>dobj(iLength);
	dobj.Accept();
	dobj.Display();
	double dValue = 0;
	cout<<"Enter element to find FirstOccurence of that element : "<<"\n";
	cin>>dValue;
	iRet = dobj.FirstOccurence(dValue);
	cout<<"FirstOccurence of "<<dValue<<" is : "<<iRet<<"\n";
	
	return 0;
}