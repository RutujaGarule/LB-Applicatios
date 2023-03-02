// Write java program which accept array from user and reverse each number of that array

import java.util.Scanner;

class  Array
{
	public int Arr[];
	public int Size;
	
	public Array(int No)
	{
		this.Size = No;
		Arr = new int[Size];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter elements in the array : ");
		for(int i = 0;i < Size;i++)
		{
			Arr[i] = sobj.nextInt();
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
	
	public void Reverse()
	{
		int iDigit = 0;
		int Value = 0;
		
		for(int i = 0;i < Arr.length;i++)
		{
			Value = 0;
			while(Arr[i] != 0)
			{
				iDigit = Arr[i] % 10;
				Value = iDigit + (Value*10);
				Arr[i] = Arr[i] / 10;
			}
			Arr[i] = Value;
		}
	}
	
}




class Program43_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int Size = sobj.nextInt();
		
		Array aobj = new Array(Size);
		
		aobj.Accept();
		aobj.Display();
		aobj.Reverse();
		aobj.Display();
		
	}
}