// check number is amstrong or not(Three digits number) 

#include<iostream>
using namespace std;

class Amstrong
{
	public:
		int iNo;
	
	Amstrong(int i)
	{
		iNo = i;
	}
	
	bool ChkAmstrong()
	{
		int iCnt = 0;
		int iDigit = 0;
		int iCube = 0;
		int iSum = 0;
		int iTemp = iNo;
		
		while(iNo != 0)
		{
			iCube = 0;
			
			iDigit = iNo % 10;
			iCube = (iDigit * iDigit * iDigit);
			iSum = iSum + iCube;
			iNo = iNo / 10;
		}
		
		if(iSum == iTemp)
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
	
	Amstrong obj(iValue);
	
	bRet = obj.ChkAmstrong();
	if(bRet == true)
	{
		cout<<"Number is Amstrong"<<"\n";
	}
	else
	{
		cout<<"Number is  not Amstrong"<<"\n";
	}
	
	return 0;
}
