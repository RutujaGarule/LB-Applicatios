/* Complete definations of below functions
	1. SearchLast() - Search last occurrence of number
	2. EvenCount() - Count Even elements
	3. OddCount() - Count Odd elements
	4. SumAll() - Sum of all the elements

*/

#include<iostream>
using namespace std;

class Array
{
	public:
		int * Arr;
		int iSize;
		
		Array(int i)
		{
			iSize = i;
			Arr = new int[iSize];
		}
		
		~Array()
		{
			cout<<"Inside destructor"<<"\n";
			delete []Arr;
		}
		
		void Accept()
		{
			cout<<"Enter the elements in the array : "<<"\n";
			for(int iCnt = 0;iCnt < iSize;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}
		
		void Display()
		{
			cout<<"elements in the array are : "<<"\n";
			for(int iCnt = 0;iCnt < iSize;iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";
			}
			cout<<"\n";
		}
};

class ArrayX : public Array
{
	public:
		ArrayX(int i) : Array(i)
		{}
		
		int SearchFirst(int);
		int SearchLast(int);
		int EvenCount();
		int OddCount();
		int SumAll();
};

int ArrayX :: SearchFirst(int iNo)
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


int ArrayX :: SearchLast(int iNo)
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

int ArrayX :: EvenCount()
{
	int iEvenCnt = 0;
	int iCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iEvenCnt++;
		}
	}
	return iEvenCnt;
}

int ArrayX :: OddCount()
{
	int iCnt = 0;
	int iOddCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] % 2 != 0)
		{
			iOddCnt++;
		}
	}
	return iOddCnt;
}

int ArrayX :: SumAll()
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return iSum;
}


int main()
{
	int iLength = 0;
	int iRet = 0;
	int iValue1 = 0;
	int iValue2 = 0;
	
	cout<<"Enter the size of array : "<<"\n";
	cin>>iLength;
	
	ArrayX obj(iLength);
	obj.Accept();
	obj.Display();
	
	cout<<"Enter the number to search First Occurrece : "<<"\n";
	cin>>iValue1;
	iRet = obj.SearchFirst(iValue1);
	cout<<"Element found at index : "<<iRet<<"\n";
	
	cout<<"Enter the number to search Last Occurrece : "<<"\n";
	cin>>iValue2;
	iRet = obj.SearchLast(iValue2);
	cout<<"Element found at index : "<<iRet<<"\n";
	
	iRet = obj.EvenCount();
	cout<<"Count of Even elements are : "<<iRet<<"\n";
	
	iRet = obj.OddCount();
	cout<<"Count of Odd elements are : "<<iRet<<"\n";
	
	iRet = obj.SumAll();
	cout<<"Summation of all elements are : "<<iRet<<"\n";
	
	return 0;
}