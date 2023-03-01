// create table of given number

#include<iostream>
using namespace std;

class Table
{
	public:
		int iNo;
		
	Table(int i)
	{
		iNo = i;
	}
	void CreateTable()
	{
		int iCnt = 0;
		
		for(iCnt = 1;iCnt <= 10;iCnt++)
		{
			cout<<(iCnt*iNo)<<"\t";
		}
	}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter ehe element"<<"\n";
	cin>>iValue;
	
	Table obj(iValue);
	
	obj.CreateTable();
	
	return 0;
}
