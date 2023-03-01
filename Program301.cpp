
#include<iostream>
using namespace std;

int Addition(int i, int j)
{
	int Ans = 0;
	Ans = i + j;
	return Ans;
}

int main()
{
	int a = 11;
	int b = 10;
	int Ret = 0;
	
	Ret = Addition(a,b);
	cout<<"Addition is :"<<Ret<<"\n";
	
	return 0;
}