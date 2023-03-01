// Abundant numbers between 1 to 1000

#include<iostream>
using namespace std;

class AbundantX
{
	public:
		
		void Abundant()
		{
			int iSum = 0;
			int iCnt = 0;
			
			for(int i = 1;i <= 1000;i++)
			{
				iSum = 0;
				for(iCnt = 1;iCnt <= (i/2);iCnt++)
				{
					if(i % iCnt == 0)
					{
						iSum = iSum + iCnt;
					}
				}
				if(iSum > i)
				{
					cout<<i<<"\t";
				}
			}
		}	
};

int main()
{	
	AbundantX obj;
	
	obj.Abundant();
	
	return 0;
}