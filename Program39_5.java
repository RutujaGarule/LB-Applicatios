// Accept string and Display below pattern
/*
	Input = Hello
	
	H	#	#	#	#
	H	e	#	#	#
	H	e	l	#	#
	H	e	l	l	#
	H	e	l	l	o
	H	e	l	l	#
	H	e	l	#	#
	H	e	#	#	#
	H	#	#	#	#
*/

import java.util.Scanner;

class Pattern
{
	public String Str;
	
	public Pattern(String s)
	{
		Str = s;
	}
	
	public void Display()
	{
		char Arr[] = Str.toCharArray();
		
		for(int i = 0;i < Arr.length;i++)
		{
			for(int j = 0;j < Arr.length;j++)
			{
				if(i >= j)
				{
					System.out.print(Arr[j]+"\t");
				}
				else
				{
					System.out.print("#"+"\t");
				}
			}
			System.out.println();
		}
		
		for(int i = Arr.length-2;i >= 0;i--)
		{
			for(int j = 0;j < Arr.length;j++)
			{
				if(i >= j)
				{
					System.out.print(Arr[j]+"\t");
				}
				else
				{
					System.out.print("#"+"\t");
				}
			}
			System.out.println();
		}
		
	}
}

class Program39_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string");
		String s = sobj.nextLine();
		
		Pattern pobj = new Pattern(s);
		pobj.Display();
	}	
}
