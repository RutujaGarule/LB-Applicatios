// Accept string and Display below pattern
/*
	Input = Hello
	
	H	e	l	l	o
	H	e	l	l	
	H	e	l	
	H	e
	H
	H	e
	H	e	l
	H	e	l	l
	H	e	l	l	o	
	
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
		
		for(int i = Arr.length-1;i >= 0;i--)
		{
			for(int j = 0;j < Arr.length;j++)
			{
				if(i >= j)
				{
					System.out.print(Arr[j]+"\t");
				}
			}
			System.out.println();
		}
		
		for(int i = 1;i < Arr.length;i++)
		{
			for(int j = 0;j < Arr.length;j++)
			{
				if(i >= j)
				{
					System.out.print(Arr[j]+"\t");
				}
			}
			System.out.println();
		}
	}
}

class Program38_4
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
