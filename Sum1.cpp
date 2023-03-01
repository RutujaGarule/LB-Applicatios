// Sum of n natural numbers

#include<iostream>
using namespace std;

class Sum
{
	public:
		int iNo;
		
		Sum(int i)
		{
			iNo = i;
		}
		
		int Summation()
		{
			int iSum = 0;
			int iCnt = 0;
			
			for(iCnt = 1;iCnt <= iNo;iCnt++)
			{
				iSum = iSum + iCnt;
			}
			return iSum;
		}
};


int main()
{
	int ivalue = 0;
	int iRet = 0;
	
	cout<<"Enter the number"<<"\n";
	cin>>ivalue;
	
	Sum obj(ivalue);
	iRet = obj.Summation();
	cout<<"Summation of natural numbers are : "<<iRet<<"\n";
	
	return 0;
}