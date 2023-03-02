// Accept number from user and count digits in between 3 and 7

import java.util.Scanner;

class Digit
{
	public int iNo;
	
	public Digit(int i)
	{
		iNo = i;
	}
	
	public int CountDigits()
	{
		int iCount = 0;
		int iDigit = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			
			if((iDigit > 3) && (iDigit < 7))
			{
				iCount++;
			}
			
			iNo = iNo / 10;
		}
		return iCount;
	}
}

class Program33_3
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int iValue = sobj.nextInt();
		
		Digit dobj = new Digit(iValue);
		
		int iRet = dobj.CountDigits();
		System.out.println("Number of digits in between 3 and 7 are : "+iRet);
			
	}
}