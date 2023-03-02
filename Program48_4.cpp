// Write generic program to accept N values and search last occurence of any specific value 

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
		int LastOccurence(T iNo)
		{
			int iCnt = 0;
			for(iCnt = iSize-1;iCnt >= 0;iCnt--)
			{
				if(Arr[iCnt] == iNo)
				{
					break;
				}
			}
			if(iCnt < 0)
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
	cout<<"Enter element to find LastOccurence of that element : "<<"\n";
	cin>>cValue;
	int iRet = cobj.LastOccurence(cValue);
	cout<<"LastOccurence of "<<cValue<<" is : "<<iRet<<"\n";
	
	Number <int>iobj(iLength);
	iobj.Accept();
	iobj.Display();
	int iValue = 0;
	cout<<"Enter element to find LastOccurence of that element : "<<"\n";
	cin>>iValue;
	iRet = iobj.LastOccurence(iValue);
	cout<<"LastOccurence of "<<iValue<<" is : "<<iRet<<"\n";
	
	Number <float>fobj(iLength);
	fobj.Accept();
	fobj.Display();
	float fValue = 0;
	cout<<"Enter element to find LastOccurence of that element : "<<"\n";
	cin>>fValue;
	iRet = fobj.LastOccurence(fValue);
	cout<<"LastOccurence of "<<fValue<<" is : "<<iRet<<"\n";
	
	Number <double>dobj(iLength);
	dobj.Accept();
	dobj.Display();
	double dValue = 0;
	cout<<"Enter element to find LastOccurence of that element : "<<"\n";
	cin>>dValue;
	iRet = dobj.LastOccurence(dValue);
	cout<<"LastOccurence of "<<dValue<<" is : "<<iRet<<"\n";
	
	return 0;
}