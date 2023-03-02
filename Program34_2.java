// Accept N numbers from user and accept one another number as NO
// return the index of first occurance of that NO

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
	
	public int ChkIndex(int iNo)
	{
		int iCnt = 0;
		for(iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				break;
			}
		}
		if(iCnt == Arr.length)
		{
			return -1;
		}
		else
		{
			return iCnt;
		}
	}
}

class Program34_2
{
	public static void main(String s[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Howmany elements you want to enter : ");
		int iValue = sobj.nextInt();
		
		Derived dobj = new Derived(iValue);
		dobj.Accept();
		dobj.Display();
		
		System.out.println("Enter another number that you want to search : ");
		int i = sobj.nextInt();
		
		int iRet = dobj.ChkIndex(i);
		System.out.println("Index at which "+i+" is found is : "+iRet);	
	}
}
