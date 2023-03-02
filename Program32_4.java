// Accept N numbers from user and display all such elements which are divisible by 3 and divisible by 5

import java.util.Scanner;

class Number
{
	public int iNo;
	public int Arr[];
	
	public Number(int i)
	{
		iNo = i;
		Arr = new int[iNo];
	}
	
	protected void Accept()
	{
		System.out.println("Enter the elements in the array : ");
		Scanner sobj = new Scanner(System.in);
		
		for(int iCnt = 0;iCnt < iNo;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		
		System.out.println();
	}
	
	protected void Display()
	{
		System.out.println("elements in the array are : ");
		
		for(int iCnt = 0;iCnt < iNo;iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
		
		System.out.println();
	}
}

class Derived extends Number
{
	public Derived(int i)
	{
		super(i);
	}
	
	public void DisplayNumbers()
	{
		System.out.println("Numbers which are even and divisible by 3 and 5 are : ");
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 == 0))
			{
				System.out.print(Arr[iCnt]+"\t");
			}
		}
		System.out.println();
	}
}

class Program32_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of elements : ");
		int i = sobj.nextInt();
		
		Derived obj = new Derived(i);
		obj.Accept();
		obj.Display();
		
		obj.DisplayNumbers();
	}
}