// Write java program which accept array of characters from user.
// Return difference between frequency of capital and frequency of small characters


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
	
	public int DiffFrequency()
	{
		int Small = 0;
		int Capital = 0;
		
		for(int i = 0;i < Arr.length;i++)
		{
			if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
			{
				Small++;
			}
			else
			{
				Capital++;
			}
		}
		
		return (Capital-Small);
	}
	
}


class Program44_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of character array : ");
		int Size = sobj.nextInt();
		
		Array aobj = new Array(Size);
		
		aobj.Accept();
		aobj.Display();
		
		int Ret = aobj.DiffFrequency();
		System.out.println("\nDifference between frequency of capital and small characters is : "+Ret);
		
	}
}