// check number is Abundant or not

#include<iostream>
using namespace std;

class Base
{
	public:
		int iNo;
		
		Base(int i)
		{
			iNo = i;
		}
};

class Abundant : public Base
{
	public:
	
		Abundant(int i) : Base(i)
		{}
		
		bool ChkAbundant()
		{
			int iCnt = 0;
			int iSum = 0;
			
			for(iCnt = 1;iCnt <= iNo/2;iCnt++)
			{
				if(iNo % iCnt == 0)
				{
					iSum = iSum + iCnt;
				}
			}
			cout<<iSum<<"\n";
			
			if(iSum > iNo)
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
	
	cout<<"Enter the number : "<<"\n";
	cin>>iValue;
	
	Abundant obj(iValue);
	
	bRet = obj.ChkAbundant();
	
	if(bRet == true)
	{
		cout<<"Number is Abundant number"<<"\n";
	}
	else
	{
		cout<<"Number is not Abundant number"<<"\n";
	}

	
	return 0;
}