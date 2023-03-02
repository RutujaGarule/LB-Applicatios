// Accept string and Display below pattern
/*
	Input = Hello
	
	H	*	*	*	*
	H	e	*	*	*
	H	e	l	*	*
	H	e	l	l	*
	
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
		
		for(int i = 0;i < Arr.length-1;i++)
		{
			for(int j = 0;j < Arr.length;j++)
			{
				if(i >= j)
				{
					System.out.print(Arr[j]+"\t");
				}
				else
				{
					System.out.print("*"+"\t");
				}
			}
			System.out.println();
		}
	}
}

class Program39_1
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
