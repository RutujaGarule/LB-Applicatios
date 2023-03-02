// Write java program which accept array from user. and display below pattern
// Input : 8 9 7 6 4 2 4
/*
	*	*	*	*	*	*	*	*
	*	*	*	*	*	*	*	*	*
	*	*	*	*	*	*	*
	*	*	*	*	*	*
	*	*	*	*
	*	*
	*	*	*	*
*/


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
		System.out.println();
	}
	
	public void Pattern()
	{
		for(int i = 0;i < Arr.length;i++)
		{
			for(int j = 1;j <= Arr[i];j++)
			{
				System.out.print("*"+"\t");
			}
			System.out.println();
		}
	}
	
}


class Program44_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int Size = sobj.nextInt();
		
		Array aobj = new Array(Size);
		
		aobj.Accept();
		aobj.Display();
		aobj.Pattern();		
	}
}