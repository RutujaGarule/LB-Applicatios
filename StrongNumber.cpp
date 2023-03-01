// check number is strong or not
// n = 145
// 1! + 4! + 5! = 145
//145 is strong number

#include<iostream>
using namespace std;

class Strong
{
	public:
		int iNo;
		
	Strong(int i)
	{
		iNo = i;
	}
	
	bool ChkStrong()
	{
		int iCnt = 0;
		int iDigit = 0;
		int iFact = 1;
		int iSum = 0;
		int iTemp = iNo;
		
		while(iNo != 0)
		{
			iFact = 1;
			
			iDigit = iNo % 10;
			for(iCnt = 1;iCnt<=iDigit;iCnt++)
			{
				iFact = iFact * iCnt;
			}
			//cout<<iFact<<"\n";
			
			iSum = iSum + iFact;
			//cout<<iSum<<"\n";
			
			iNo = iNo / 10;
		}
		//cout<<iSum<<"\n";
		
		if(iTemp == iSum)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	cout<<"Enter ehe element"<<"\n";
	cin>>iValue;
	
	Strong obj(iValue);
	
	bRet = obj.ChkStrong();
	if(bRet == true)
	{
		cout<<"Number is strong number"<<"\n";
	}
	else
	{
		cout<<"Number is not strong number"<<"\n";
	}
	
	return 0;
}
