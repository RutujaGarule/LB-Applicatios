#include<iostream>
using namespace std;

bool ChkAnagram(int iNo1,int iNo2)
{
	int Frequency1[10] = {0};
	int Frequency2[10] = {0};
	bool bFlag = true;
	
	while(iNo1 != 0)
	{
		Frequency1[(iNo1 % 10)]++;
		iNo1 = iNo1 / 10;
	}
	
	while(iNo2 != 0)
	{
		Frequency2[(iNo2 % 10)]++;
		iNo2 = iNo2 / 10;
	}
	
	for(int iCnt = 1;iCnt < 10;iCnt++)
	{
		if(Frequency1[iCnt] != Frequency2[iCnt])
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