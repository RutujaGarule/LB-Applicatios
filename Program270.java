import java.util.*;

class Base
{
	public void Display(String s)
	{
		for(int i = 0;i < s.length();i++)
		{
			System.out.println(s.charAt(i));
		}
	}
}


class Program270
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String str = sobj.nextLine();
		
		Base bobj = new Base();
		bobj.Display(str);
	
	}
}