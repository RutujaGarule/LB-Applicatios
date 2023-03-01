// Display Fibonacci series

#include<iostream>
using namespace std;

class Base
{
	public:
		int iNo;
		
		Base(int a)
		{
			iNo = a;
		}
};

class Fibonacci : public Base
{
	public:
		Fibonacci(int i) : Base(i)
		{}
		
		void Display()
		{
			int iCnt = 0;
			int iSum = 0;
			int iNo1 = 0;
			int iNo2 = 1;
			
			for(iCnt = 0;iCnt < iNo;iCnt++)
			{
				iSum = iNo1+iNo2;
				printf("%d\t",iSum);
				iNo1 = iNo2;
				iNo2 = iSum;	
			}
		}
};

int main()
{
	int iValue = 0;
	cout<<"Enter the number"<<"\n";
	cin>>iValue;
	
	Fibonacci obj(iValue);
	obj.Display();
	
	
	return 0;
}