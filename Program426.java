import java.util.*;

class Program426
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		
		String str = sobj.nextLine();
		
		String arr[] = str.split(" ");
		
		System.out.println("Number of words are : "+arr.length);
		
		int iMax = 0;
		int MaxIndex = 0;
		
		for(int i = 0;i < arr.length;i++)
		{
			if(iMax < arr[i].length())
			{
				iMax = arr[i].length();
				MaxIndex = i;
			}
		}
		
		System.out.println("Largest word from string is : "+arr[MaxIndex]+" with length : "+ iMax);
		
	}	
}