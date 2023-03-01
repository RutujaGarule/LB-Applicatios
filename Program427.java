import java.util.*;

class Program427
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		
		String str = sobj.nextLine();
		
		String arr[] = str.split(" ");
		
		int iCount = 0;
		
		for(int i = 0;i < arr.length;i++)
		{
			if(arr[i].equals("Demo"))
			{
				iCount++;
			}
		}
		
		System.out.println("Frequency of Demo word is : "+ iCount);
		
	}	
}