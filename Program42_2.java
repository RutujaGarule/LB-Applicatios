// Write java program which accept two arrays from user and display minimum element of each array

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
	}
	
	public void Minimum()
	{
		int Min1 = 0, Min2 = 0;
		
		Min1 = Arr1[0];
		Min2 = Arr2[0];
		
		for(int i = 0;i < Arr1.length;i++)
		{
			if(Arr1[i] < Min1)
			{
				Min1 = Arr1[i];
			}
		}
		
		for(int j = 0;j < Arr2.length;j++)
		{
			if(Arr2[j] < Min2)
			{
				Min2 = Arr2[j];
			}
		}
		
		System.out.println("\nMinimum element is : "+Min1+" and "+Min2);
	}
	
}

class Program42_2
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
		
		aobj.Minimum();
	}
}