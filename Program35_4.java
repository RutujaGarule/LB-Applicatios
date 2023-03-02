// Accept string from user and reverse the contents of that string by toggling the case


import java.util.Scanner;

class Demo
{
	public String Str1;
	
	public Demo(String a)
	{
		Str1 = a;
	}
	
	public StringBuffer ToggleRev()
	{
		char Arr[] = Str1.toCharArray();
		
		StringBuffer str = new StringBuffer();
		
		for(int i = Arr.length-1;i >= 0;i--)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				Arr[i] = (char)(Arr[i] + 32);
				str.append(Arr[i]);
			}
			else
			{
				if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
				{
					Arr[i] = (char)(Arr[i] - 32);
					str.append(Arr[i]);
				}
			}
		}
		return str;
	}	
}

class Program35_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String s1 = sobj.nextLine();
		
		Demo dobj = new Demo(s1);
		
		StringBuffer str = dobj.ToggleRev();
		System.out.println(str);
		
	}
}