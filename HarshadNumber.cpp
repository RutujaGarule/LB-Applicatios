// Check number is harshad number or not

#include<iostream>
using namespace std;

class Harshad
{
	public:
		int iNo;
		
		Harshad(int i)
		{
			iNo = i;
		}
		
		bool ChkNum()
		{
			int iDigit = 0;
			int iSum = 0;
			int iTemp = iNo;
			
			while(iTemp != 0)
			{
				iDigit = iTemp % 10;
				iSum = iSum + iDigit;
				iTemp = iTemp / 10;
			}
			if(iNo % iSum == 0)
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
	
	cout<<"Enter the number"<<"\n";
	cin>>iValue;
	
	Harshad obj(iValue);
	bRet = obj.ChkNum();
	if(bRet == true)
	{
		cout<<"Number is harshad number"<<"\n";
	}
	else
	{
		cout<<"Number is not harshad number"<<"\n";
	}
	
	return 0;
}