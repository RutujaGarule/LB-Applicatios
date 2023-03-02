// Accept number from user and return difference between summation of even and odd digits

import java.util.Scanner;

class Digit
{
	public int iNo;
	
	public Digit(int i)
	{
		iNo = i;
	}
	
	public int Difference()
	{
		int iEvenSum = 0, iOddSum = 0;
		int iDigit = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			
			if(iDigit%2 == 0)
			{
				iEvenSum = iEvenSum + iDigit;
			}
			else
			{
				iOddSum = iOddSum + iDigit;
			}
			
			iNo = iNo / 10;
		}
		return (iEvenSum - iOddSum);
	}
}

class Program33_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int iValue = sobj.nextInt();
		
		Digit dobj = new Digit(iValue);
		
		int iRet = dobj.Difference();
		System.out.println("Difference between summation of Even and Odd elements are : "+iRet);
	}
}