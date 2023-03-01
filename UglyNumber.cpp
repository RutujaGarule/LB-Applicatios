// Check number is ugly number or not

#include<iostream>
using namespace std;

class Numbers
{
	public:
		int iNo;
		
		Numbers(int i)
		{
			iNo = i;
		}
		bool Factors()
		{
			bool bRet = false;
			
			for(int iCnt = 1;iCnt < iNo;iCnt++)
			{
				if(iNo % iCnt == 0)
				{
					//cout<<iCnt<<"\n";
					
				}
			}
			
		}
		
		bool ChkPrime(int iVal)
		{
			for(int j = 1;j<= iVal;j++)
			{
				if(iVal % j == 0)
				{
					break;
				}
			}
			//cout<<iVal<<"\n";
			if(iVal <= 5)
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
	cout<<"Enter the number : "<<"\n";
	cin>>iValue;
	
	Numbers nobj(iValue);
	
	bool Ret = nobj.Factors();
	if(Ret == true)
	{
		cout<<"Number is ugly number"<<"\n";
	}
	else
	{
		cout<<"Number is not ugly number"<<"\n";
	}
	
	return 0;
}
