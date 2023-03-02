// Accept two strings from user and check whether contents of two strings are equal or not


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
	
	public boolean CheckString()
	{
		boolean flag = false;
		
		if(Str1.equals(Str2))
		{
			flag = true;
		}
		return flag;
	}
	
}


class Program35_2
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String s1 = sobj.nextLine();
		
		System.out.println("Enter second string");
		String s2 = sobj.nextLine();
		
		Demo dobj = new Demo(s1,s2);
		
		boolean bRet = dobj.CheckString();
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