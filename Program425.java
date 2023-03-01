import java.util.*;

class Program425
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		
		String str = sobj.nextLine();
		
		String arr[] = str.split(" ");
		
		System.out.println("Number of words are : "+arr.length);
		
		System.out.println("Words from string are : ");
		for(int i = 0;i < arr.length;i++)
		{
			System.out.println(arr[i]+" Length : "+arr[i].length());
		}
		
	}	
}