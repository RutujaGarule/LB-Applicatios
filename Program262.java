import java.util.Scanner;

class ArrayX
{
	protected int Arr[];
	
	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}
	
	protected void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter " + Arr.length + " elements");
		
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.println("Enter the element no : "+ (iCnt+1));
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	protected void Display()
	{
		System.out.println("Elements of array are : ");
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
		System.out.println();
	}	
}

class ChildX extends ArrayX
{
	public ChildX(int iSize)
	{
		super(iSize);
	}
	
	public void Reverse()
	{
		int iStart = 0;
		int iEnd = Arr.length - 1;
		int iTemp = 0;
		
		while(iStart < iEnd)
		{
			iTemp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = iTemp;
			
			iStart++;
			iEnd--;
		}
	}
}

class Program262
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int iSize = sobj.nextInt();
		
		ChildX obj = new ChildX(iSize);
		
		obj.Accept();
		obj.Display();
		
		obj.Reverse();
		
		System.out.println("Array after reverse operation is : ");
		obj.Display();
	}
}