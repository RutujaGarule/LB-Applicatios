
import java.util.*;

class Digits
{	
	public boolean ChkAmstrong(int iNo)
	{
		int iDigitCount = 0;
		int iTemp = iNo;
		int iDigit = 0;
		int iCnt = 0;
		int iSum = 0;
		int iPower = 1;
		
		while(iTemp != 0)
		{
			iDigitCount++;
			iTemp = iTemp / 10;
		}
		
		iTemp = iNo;
		
		while(iTemp != 0)
		{
			iDigit = iTemp % 10;
			
			for(iCnt =1;iCnt <= iDigitCount;iCnt++)
			{
				iPower = iPower * iDigit;
			}
			iSum = iSum + iPower;
			iPower = 1;
			
			iTemp = iTemp / 10;
		}
		if(iSum == iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
}

class Program255
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first number : ");
		int iNo = sobj.nextInt();
		
		Digits dobj = new Digits();
		
		boolean bRet = dobj.ChkAmstrong(iNo);
		if(bRet == true)
		{
			System.out.println(iNo+ " is amstrong Number");
		}
		else
		{
			System.out.println(iNo+ " is not amstrong Number");
		}
	}
}