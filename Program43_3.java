// Write java program which accept array of characters and count number of capital characters

import java.util.Scanner;

class  Array
{
	public char Arr[];
	public int Size;
	
	public Array(int No)
	{
		this.Size = No;
		Arr = new char[Size];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter elements in the array : ");
		for(int i = 0;i < Size;i++)
		{
			Arr[i] = sobj.next().charAt(0);
		}
	}
	
	public void Display()
	{
		System.out.println("\nelements in the array are : ");
		for(int i = 0;i < Size;i++)
		{
			System.out.print(Arr[i]+"\t");
		}
		
	}
	
	public int CountCapital()
	{
		int Count = 0;
		
		for(int i = 0;i < Arr.length;i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				Count++;
			}
		}
		return Count;
	}
	
}




class Program43_3
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int Size = sobj.nextInt();
		
		Array aobj = new Array(Size);
		
		aobj.Accept();
		aobj.Display();
		int iRet = aobj.CountCapital();
		System.out.println("\nCount of capital characters are : "+iRet);
		
	}
}