
#include<iostream>
using namespace std;

double Addition(double i, double j)
{
	double Ans = 0.0;
	Ans = i + j;
	return Ans;
}

int main()
{
	double a = 11.9;
	double b = 10.1;
	double Ret = 0.0;
	
	Ret = Addition(a,b);
	cout<<"Addition is :"<<Ret<<"\n";
	
	return 0;
}