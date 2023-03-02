// Write generic program to multiply two numbers

#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
	public:
		T iValue1;
		T iValue2;
		
		Arithmetic(T i,T j)
		{
			iValue1 = i;
			iValue2 = j;
		}
		
		T Multiplication()
		{
			T iMult;
			iMult = iValue1 * iValue2;
			return iMult;
		}
};


int main()
{
	int iNo1 = 0, iNo2 = 0;
	cout<<"Enter First interger Number : "<<"\n";
	cin>>iNo1;
	cout<<"Enter second interger Number : "<<"\n";
	cin>>iNo2;
	Arithmetic <int>obj(iNo1,iNo2);
	int iRet = obj.Multiplication();
	cout<<"Multiplication of two numbers is : "<<iRet<<"\n";
	
	float fNo1 = 0.0f, fNo2 = 0.0f;
	cout<<"Enter First float Number : "<<"\n";
	cin>>fNo1;
	cout<<"Enter second float Number : "<<"\n";
	cin>>fNo2;
	Arithmetic <float>fobj(fNo1,fNo2);
	float fRet = fobj.Multiplication();
	cout<<"Multiplication of two numbers is : "<<fRet<<"\n";
	
	double dNo1 = 0.0, dNo2 = 0.0;
	cout<<"Enter First double Number : "<<"\n";
	cin>>dNo1;
	cout<<"Enter second double Number : "<<"\n";
	cin>>dNo2;
	Arithmetic <double>dobj(dNo1,dNo2);
	double dRet = dobj.Multiplication();
	cout<<"Multiplication of two numbers is : "<<dRet<<"\n";
	
	return 0;
}