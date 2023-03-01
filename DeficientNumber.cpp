// check number is deficient or not

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

class deficient : public Base
{
	public:
	
		deficient(int i) : Base(i)
		{}
		
		bool Chkdeficient()
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
			
			if(iSum < iNo)
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
	
	deficient obj(iValue);
	
	bRet = obj.Chkdeficient();
	
	if(bRet == true)
	{
		cout<<"Number is deficient number"<<"\n";
	}
	else
	{
		cout<<"Number is not deficient number"<<"\n";
	}

	
	return 0;
}