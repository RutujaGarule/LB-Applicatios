// Accept string from user and check whether it contains vowels in it or not

import java.util.Scanner;


class StringDemo
{
	public boolean ChkVowels(String str)
	{
		int Count = 0;
		boolean bFalg = false;
		
		char A[] = str.toCharArray();
		
		for(int iCnt = 0;iCnt < A.length;iCnt++)
		{
			if((A[iCnt] == 'a')||(A[iCnt] == 'e')||(A[iCnt] == 'i')||(A[iCnt] == 'o')||(A[iCnt] == 'u'))
			{
				bFalg = true;
				break;
			}
		}
		return bFalg;
	}
}

class Program31_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string");
		String Arr = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		boolean bRet = obj.ChkVowels(Arr);
		if(bRet == true)
		{
			System.out.println("String contains vowels");
		}
		else
		{
			System.out.println("String not contains vowels");
		}
	}
}