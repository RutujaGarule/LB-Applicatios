// Write java program which accept two arrays from user and check whether that array and its elements are palindrome or not

import java.util.Scanner;

class  Array
{
	public int Arr1[];
	public int Arr2[];
	public int Size1;
	public int Size2;
	
	public Array(int No1, int No2)
	{
		this.Size1 = No1;
		Arr1 = new int[Size1];
		this.Size2 = No2;
		Arr2 = new int[Size2];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter elements in the First array : ");
		for(int i = 0;i < Size1;i++)
		{
			Arr1[i] = sobj.nextInt();
		}
		
		System.out.println("Enter elements in the second array : ");
		for(int i = 0;i < Size2;i++)
		{
			Arr2[i] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("\nelements in the first array are : ");
		for(int i = 0;i < Size1;i++)
		{
			System.out.print(Arr1[i]+"\t");
		}
		
		System.out.println("\nelements in the second array are : ");
		for(int i = 0;i < Size2;i++)
		{
			System.out.print(Arr2[i]+"\t");
		}
		
		System.out.println();
	}
	
	public boolean CheckPalindrome()
	{
		int iDigit = 0;
		int Rev = 0;
		boolean flag = false;
		int temp = 0;
		
		for(int i = 0;i < Arr1.length;i++)
		{
			for(int j = Arr2.length-1; j >=0;j--)
			{
				if(Arr1[i] != Arr2[j])
				{
					break;
				}
			}
		}
	}
}


class Program42_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of first array : ");
		int Size1 = sobj.nextInt();
		System.out.println("Enter size of second array : ");
		int Size2 = sobj.nextInt();
		
		Array aobj = new Array(Size1,Size2);
		
		aobj.Accept();
		aobj.Display();
		
		boolean bRet = aobj.CheckPalindrome();
		if(bRet == true)
		{
			System.out.println("Array is Palindrome");
		}
		else
		{
			System.out.println("Array is not Palindrome");
		}
		
	}
}