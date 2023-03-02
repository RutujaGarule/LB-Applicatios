// Accept N numbers from user and accept range
// Display all elements from that range


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
		
		for(int iCnt =0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		System.out.println();
	}
	
	protected void Display()
	{
		System.out.println("elements in the array are : ");
		
		for(int iCnt =0;iCnt < Arr.length;iCnt++)
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
	
	public void DisplayNumbers(int iStart, int iEnd)
	{
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
			{
				System.out.print(Arr[iCnt]+"\t");
			}
		}
		System.out.println();
	}
}

class Program34_4
{
	public static void main(String s[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Howmany elements you want to enter : ");
		int iValue = sobj.nextInt();
		
		Derived dobj = new Derived(iValue);
		dobj.Accept();
		dobj.Display();
		
		System.out.println("Enter starting point : ");
		int i = sobj.nextInt();
		
		System.out.println("Enter ending point : ");
		int j = sobj.nextInt();
		
		dobj.DisplayNumbers(i,j);
	}
}
