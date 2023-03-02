// Write java program which accept two arrays from user and copy the contents of that array into another array in reverse order and return new array

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
	
	public int[] CopyArrayRev()
	{
		int Size = this.Size1+this.Size2;
		int Arr[] = new int[Size];
		int index = 0;
		
		for(int i = Arr1.length-1;i >= 0 ;i--)
		{
			Arr[index] = Arr1[i];
			//System.out.print(Arr[index]+"\t");
			index++;
		}
		
		for(int j = Arr2.length-1;j >= 0 ;j--)
		{
			Arr[index] = Arr2[j];
			//System.out.print(Arr[index]+"\t");
			index++;
		}
		return Arr;
	}
	
}

class Program42_3
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
		
		int Arr[] = aobj.CopyArrayRev();
		System.out.println("Elements in new array are : ");
		for(int i = 0;i < Arr.length;i++)
		{
			System.out.print(Arr[i]+"\t");
		}
		System.out.println();
	}
}