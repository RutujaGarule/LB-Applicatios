// Accept two strings from user and check whether first N contents of two strings are equal or not


import java.util.Scanner;

class Demo
{
	public String Str1;
	public String Str2;
	
	public Demo(String a,String b)
	{
		Str1 = a;
		Str2 = b;
	}
	
	public boolean CheckString(int No)
	{
		boolean flag = false;
		
		try 
		{
			String s1 = Str2.substring(0,No);
			String s2 = Str1.substring(0,No);
		
			if(s1.equals(s2))
			{
				flag = true;
			}
			return flag;
		}
		
		catch(Exception E)
		{
			System.out.println(E);
		}
		return flag;
	}
}

class Program35_3
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String s1 = sobj.nextLine();
		
		System.out.println("Enter second string");
		String s2 = sobj.nextLine();
		
		System.out.println("Enter howmany characters you want to compare : ");
		int i = sobj.nextInt();
		
		Demo dobj = new Demo(s1,s2);
		
		boolean bRet = dobj.CheckString(i);
		if(bRet == true)
		{
			System.out.println("Contents of two strings are equal");
		}
		else
		{
			System.out.println("Contents of two strings are not equal");
		}
	}
}