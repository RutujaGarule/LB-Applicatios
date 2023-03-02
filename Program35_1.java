// Accept two strings from user and concat N characters of second string after first string
// Value of N should be accepted from user
// If third parameter is greater than the size of second string then concat whole string after first string


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
	
	public StringBuffer Concate(int No)
	{
		StringBuffer str = new StringBuffer(Str1);
		if(No > Str2.length())
		{
			str.append(Str2,0,Str2.length());
		}
		else
		{
			str.append(Str2,0,No);
		}
		
		return str;
	}
	
}


class Program35_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String s1 = sobj.nextLine();
		
		System.out.println("Enter second string");
		String s2 = sobj.nextLine();
		
		System.out.println("Enter howmany characters you want to concate : ");
		int i = sobj.nextInt();
		
		Demo dobj = new Demo(s1,s2);
		
		StringBuffer Str = dobj.Concate(i);
		System.out.println(Str);
	}
}