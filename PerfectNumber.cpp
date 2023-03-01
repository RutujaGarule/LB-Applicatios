// check number is perfect or not

#include<iostream>
using namespace std;

class Perfect
{
	public:
		int iNo;
		
	Perfect(int i)
	{
		iNo = i;
	}
	bool ChkPerfect()
	{
		int iCnt = 0;
		int iFact = 0;
		
		for(iCnt = 1;iCnt <= iNo/2;iCnt++)
		{
			if(iNo % iCnt == 0)
			{
				iFact = iFact + iCnt;
			}
		}
		if(iFact == iNo)
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
	
	Perfect obj(iValue);
	
	bRet = obj.ChkPerfect();
	if(bRet == true)
	{
		cout<<"Number is perfect"<<"\n";
	}
	else
	{
		cout<<"Number is  not perfect"<<"\n";

	}
	
	return 0;
}
