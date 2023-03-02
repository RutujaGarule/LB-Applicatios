// Write java program which accept marks of N students from user and display class of each students
/*
	less than 35 - fail
	less than 50 - pass class
	less than 60 - Second class
	less than 70 - First class 
	greater than 70 - First class with distinction
	
*/

import java.util.Scanner;

class  Array
{
	public float Arr[];
	public int Size;
	
	public Array(int No)
	{
		this.Size = No;
		Arr = new float[Size];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter elements in the array : ");
		for(int i = 0;i < Size;i++)
		{
			Arr[i] = sobj.nextFloat();
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
	
	public void Percentage()
	{
		for(int i = 0;i < Arr.length;i++)
		{
			if(Arr[i] < 35)
			{
				System.out.println(Arr[i]+"  "+"Fail");
			}
			else if(Arr[i] < 50 && Arr[i] >= 35)
			{
				System.out.println(Arr[i]+"  "+"Pass class");
			}
			else if(Arr[i] < 60 && Arr[i] >= 50)
			{
				System.out.println(Arr[i]+"  "+"Second class");
			}
			else if(Arr[i] < 70 && Arr[i] >= 60)
			{
				System.out.println(Arr[i]+"  "+"First class");
			}
			else 
			{
				System.out.println(Arr[i]+"  "+"First class with distinction");
			}
		}
	}
	
}


class Program43_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int Size = sobj.nextInt();
		
		Array aobj = new Array(Size);
		
		aobj.Accept();
		aobj.Percentage();
		
	}
}