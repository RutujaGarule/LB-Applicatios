import java.util.*;

class Program465
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("enter string : ");
		String str = sobj.nextLine();
		
		String newstr = str.trim();
		
		String Arr[] = newstr.split(" ");
		
		System.out.println("Number of words are : "+Arr.length);
		
	}
}