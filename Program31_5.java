// Accept string from user and display it in reverse order

import java.util.Scanner;


class StringDemo
{
	public void DisplayReverse(String str)
	{
		char A[] = str.toCharArray();
		
		System.out.println("String in Reverse order is : ");
		
		for(int iCnt = A.length-1;iCnt >= 0;iCnt--)
		{
			System.out.print(A[iCnt]);
		}
		System.out.println();
	}
}

class Program31_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string");
		String Arr = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		obj.DisplayReverse(Arr);
	}
}