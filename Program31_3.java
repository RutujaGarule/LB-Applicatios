// Accept string from user and return frequency between capital and small characters

import java.util.Scanner;


class StringDemo
{
	public int CountFrequency(String str)
	{
		int Count1 = 0, Count2 = 0;
		
		char A[] = str.toCharArray();
		
		for(int iCnt = 0;iCnt < A.length;iCnt++)
		{
			if((A[iCnt] >= 'A') && (A[iCnt] <= 'Z'))
			{
				Count1++;
			}
			else if((A[iCnt] >= 'a') && (A[iCnt] <= 'z'))
			{
				Count2++;
			}
		}
		return (Count1 - Count2);
	}
}

class Program31_3
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string");
		String Arr = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		int iRet = obj.CountFrequency(Arr);
		System.out.println("Difference between frequency of capital and small characters is : "+iRet);
	}
}