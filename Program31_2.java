// Accept string from user and count number of small characters

import java.util.Scanner;


class StringDemo
{
	public int CountSmall(String str)
	{
		int Count = 0;
		
		char A[] = str.toCharArray();
		
		for(int iCnt = 0;iCnt < A.length;iCnt++)
		{
			if((A[iCnt] >= 'a') && (A[iCnt] <= 'z'))
			{
				Count++;
			}
		}
		return Count;
	}
}

class Program31_2
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string");
		String Arr = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		int iRet = obj.CountSmall(Arr);
		System.out.println("Number of small letters are : "+iRet);
	}
}