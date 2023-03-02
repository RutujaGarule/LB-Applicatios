// Write generic program to find largest number from three numbers

#include<iostream>
using namespace std;

template <class T>
class Numbers
{
	public:
		T iNo1;
		T iNo2;
		T iNo3;
		
		Numbers(T i,T j,T k)
		{
			iNo1 = i;
			iNo2 = j;
			iNo3 = k;
		}
		
		T LargrstNumber()
		{
			T iMax = iNo1;
			
			if(iNo2 > iMax)
			{
				iMax = iNo2;
			}
			if(iNo3 > iMax)
			{
				iMax= iNo3;
			}
			return iMax;
		}
};

int main()
{
	int iValue1 = 0, iValue2 = 0, iValue3 = 0;
	cout<<"Enter first integer : "<<"\n";
	cin>>iValue1;
	cout<<"Enter second integer : "<<"\n";
	cin>>iValue2;
	cout<<"Enter third integer : "<<"\n";
	cin>>iValue3;
	Numbers <int>iobj(iValue1,iValue2,iValue3);
	int iRet = iobj.LargrstNumber();
	cout<<"Largrst number is : "<<iRet<<"\n";
	
	float fValue1 = 0.0f, fValue2 = 0.0f, fValue3 = 0.0f;
	cout<<"Enter first float : "<<"\n";
	cin>>fValue1;
	cout<<"Enter second float : "<<"\n";
	cin>>fValue2;
	cout<<"Enter third float : "<<"\n";
	cin>>fValue3;
	Numbers <float>fobj(fValue1,fValue2,fValue3);
	float fRet = fobj.LargrstNumber();
	cout<<"Largrst number is : "<<fRet<<"\n";
	
	double dValue1 = 0.0, dValue2 = 0.0, dValue3 = 0.0;
	cout<<"Enter first double : "<<"\n";
	cin>>dValue1;
	cout<<"Enter second double : "<<"\n";
	cin>>dValue2;
	cout<<"Enter third double : "<<"\n";
	cin>>dValue3;
	Numbers <double>dobj(dValue1,dValue2,dValue3);
	double dRet = dobj.LargrstNumber();
	cout<<"Largrst number is : "<<dRet<<"\n";
	
	
	return 0;
} 