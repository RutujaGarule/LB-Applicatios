// Accept number from user and return multiplication of all digits

import java.util.Scanner;

class Digit
{
	public int iNo;
	
	public Digit(int i)
	{
		iNo = i;
	}
	
	public int DigitsMultiplication()
	{
		int iMult = 1;
		int iDigit = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			
			if(iDigit == 0)
			{
				iDigit = 1;
			}
			
			iMult = iMult * iDigit;
			
			iNo = iNo / 10;
		}
		return iMult;
	}
}

class Program33_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int iValue = sobj.nextInt();
		
		Digit dobj = new Digit(iValue);
		
		int iRet = dobj.DigitsMultiplication();
		System.out.println("Multiplication of digits in the number "+iValue+" is : "+iRet);
			
	}
}