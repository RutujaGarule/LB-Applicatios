// check number is prime or not

#include<iostream>
using namespace std;

class Prime
{
	public:
		int iNo;
		
	Prime(int i)
	{
		iNo = i;
	}
	bool ChkPrime()
	{
		bool bFlag = false;
		int iCnt = 0;
		
		for(iCnt = 2;iCnt <= iNo/2;iCnt++)
		{
			if(iNo % iCnt == 0)
			{
				bFlag = true;
				break;
			}
		}
		if(bFlag == true)
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
	
	Prime obj(iValue);
	
	bRet = obj.ChkPrime();
	if(bRet == true)
	{
		cout<<"Number is not prime"<<"\n";
	}
	else
	{
		cout<<"Number is prime"<<"\n";

	}
	
	return 0;
}
