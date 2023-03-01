// Numbers are anagram or not

#include<iostream>
using namespace std;

bool ChkAnagram(int iNo1,int iNo2)
{
	int Frequency[10] = {0};
	bool bFlag = true;
	int iDigit1 = 0;
	int iDigit2 = 0;
	
	while((iNo1 != 0) && (iNo2 != 0))
	{
		iDigit1 = iNo1 % 10;
		Frequency[iDigit1]++;
		
		iDigit2 = iNo2 % 10;
		Frequency[iDigit2]--;
		
		iNo1 = iNo1 / 10;
		iNo2 = iNo2 /10;
	}
	for(int iCnt = 0;iCnt < 10;iCnt++)
	{
		if(Frequency[iCnt] > 0)
		{
			bFlag = false;
			break;
		}
	}
	return bFlag;
	
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	bool bRet = false;
	
	cout<<"Enter first number : "<<"\n";
	cin>>iValue1;
	
	cout<<"Enter second number : "<<"\n";
	cin>>iValue2;
	
	bRet = ChkAnagram(iValue1,iValue2);
	
	if(bRet== true)
	{
		cout<<"Numbers are anagram"<<"\n";
	}
	else
	{
		cout<<"Numbers are not anagram"<<"\n";
	}
	
	
	return 0;
}