// Accept string from user and check whether string is palindrome or not without considering its case


import java.util.Scanner;

class Demo
{
	public String Str1;
	
	public Demo(String a)
	{
		Str1 = a;
	}
	
	public boolean CheckPalindrome()
	{
		boolean flag = false;
		
		char Arr[] = Str1.toCharArray();
		StringBuffer s = new StringBuffer();
		
		for(int i = Arr.length-1;i >= 0;i--)
		{
			s.append(Arr[i]);
		}
		
		String Str2 = new String(s);
		if(Str1.toLowerCase().equals(Str2.toLowerCase()))
		{
			flag = true;
		}
		return flag;
	}
	
}

class Program35_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String s1 = sobj.nextLine();
		
		Demo dobj = new Demo(s1);
		
		boolean bRet = dobj.CheckPalindrome();
		if(bRet == true)
		{
			System.out.println("String is palindrome");
		}
		else
		{
			System.out.println("String is not palindrome");
		}
		
	}
}