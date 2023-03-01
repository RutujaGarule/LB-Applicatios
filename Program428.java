import java.util.*;

class Program428
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String str = sobj.nextLine();
		
		System.out.println("Enter word that you want to search : ");
		String word = sobj.nextLine();
		
		String arr[] = str.split(" ");
		
		int iCount = 0;
		
		for(int i = 0;i < arr.length;i++)
		{
			if(arr[i].equals(word))
			{
				iCount++;
			}
		}
		
		System.out.println("Frequency of the word is : "+ iCount);
		
	}	
}