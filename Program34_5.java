// Accept N numbers from user and return product of all odd elements


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
	
	public int OddProducts()
	{
		int iMult = 1;
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 2) != 0)
			{
				iMult = iMult * Arr[iCnt];
			}
		}
		if(iMult > 1)
		{
			return iMult;
		}
		else
		{
			return 0;
		}
	}
}

class Program34_5
{
	public static void main(String s[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Howmany elements you want to enter : ");
		int iValue = sobj.nextInt();
		
		Derived dobj = new Derived(iValue);
		dobj.Accept();
		dobj.Display();
		
		int iRet = dobj.OddProducts();
		System.out.println("Products of all odd elements is : "+iRet);
	}
}
