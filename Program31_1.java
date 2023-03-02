// Accept string from user and count number of capital characters

import java.util.Scanner;


class StringDemo
{
	public int CountCapital(String str)
	{
		int Count = 0;
		
		char A[] = str.toCharArray();
		
		for(int iCnt = 0;iCnt < A.length;iCnt++)
		{
			if((A[iCnt] >= 'A') && (A[iCnt] <= 'Z'))
			{
				Count++;
			}
		}
		return Count;
	}
}

class Program31_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string");
		String Arr = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		int iRet = obj.CountCapital(Arr);
		System.out.println("Number of capital letters are : "+iRet);
	}
}