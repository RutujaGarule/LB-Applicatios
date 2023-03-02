// Accept number from user and count odd digits

import java.util.Scanner;

class Digit
{
	public int iNo;
	
	public Digit(int i)
	{
		iNo = i;
	}
	
	public int OddDigits()
	{
		int iCount = 0;
		int iDigit = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			
			if(iDigit%2 != 0)
			{
				iCount++;
			}
			
			iNo = iNo / 10;
		}
		return iCount;
	}
}

class Program33_2
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int iValue = sobj.nextInt();
		
		Digit dobj = new Digit(iValue);
		
		int iRet = dobj.OddDigits();
		System.out.println("Count of odd digit in "+iValue+ " is : "+iRet);
			
	}
}