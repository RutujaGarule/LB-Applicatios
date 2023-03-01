import java.util.Scanner;

/*
	Input = Hello
	
	H	e	l	l	o
	H	e	l	l	o
	H	e	l	l	o
	H	e	l	l	o
	H	e	l	l	o

*/

class Pattern
{
	public void Display(String str)
	{
		char Arr[] = str.toCharArray();
		
		for(int i = 0;i < Arr.length;i++)
		{
			for(int j = 0;j < Arr.length;j++)
			{
				System.out.print(Arr[j]+"\t");
			}
			System.out.println("\n");
		}
		
	}
}

class Program291
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string");
		String s = sobj.nextLine();
		
		pobj.Display(s);
	}
}