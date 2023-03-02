// Write generic program which accept one value from user
// Print that value that number of times on screen

#include<iostream>
using namespace std;

template <class T>
class Pattern
{
	public:
		T Value;
		int Size;
		
		Pattern(T i,int no)
		{
			Value = i;
			Size = no;
		}
		void Display()
		{
			for(int iCnt = 1;iCnt <= Size;iCnt++)
			{
				cout<<Value<<"\t";
			}
			cout<<"\n";
		}
};

int main()
{
	int Value = 0;
	
	char cNo = '\0';
	cout<<"Enter the character that you want to display : "<<"\n";
	cin>>cNo;
	cout<<"Howmany times that you want to display : "<<"\n";
	cin>>Value;
	Pattern <char>cobj(cNo,Value);
	cobj.Display();
	
	int iNo = 0;
	cout<<"Enter the integer value that you want to display : "<<"\n";
	cin>>iNo;
	cout<<"Howmany times that you want to display : "<<"\n";
	cin>>Value;
	Pattern <int>iobj(iNo,Value);
	iobj.Display();
	
	float fNo = 0.0f;
	cout<<"Enter the float value that you want to display : "<<"\n";
	cin>>fNo;
	cout<<"Howmany times that you want to display : "<<"\n";
	cin>>Value;
	Pattern <float>fobj(fNo,Value);
	fobj.Display();
	
	double dNo = 0;
	cout<<"Enter the double value that you want to display : "<<"\n";
	cin>>dNo;
	cout<<"Howmany times that you want to display : "<<"\n";
	cin>>Value;
	Pattern <double>dobj(dNo,Value);
	dobj.Display();
	
	return 0;
}