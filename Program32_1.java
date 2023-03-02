// Accept N numbers from user and return difference between summation of even and odd elements

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
	
	int iRet = 0;
	int iEvenSum = 0;
	int iOddSum = 0;
	
	public int Difference()
	{
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] % 2 == 0)
			{
				iEvenSum = iEvenSum + Arr[iCnt];
			}
			else
			{
				iOddSum = iOddSum + Arr[iCnt];
			}
		}
		
		return(iEvenSum - iOddSum);
	}
}

class Program32_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of elements : ");
		int i = sobj.nextInt();
		
		Derived obj = new Derived(i);
		obj.Accept();
		obj.Display();
		
		int iRet = obj.Difference();
		System.out.println("Difference between summation of even and off elements is : "+iRet);
	}
}