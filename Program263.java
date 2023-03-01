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
	
	public boolean ChkPalindrome()
	{
		int iStart = 0;
		int iEnd = Arr.length-1;
		boolean bFlag = true;
		
		while(iStart < iEnd)
		{
			if(Arr[iStart] != Arr[iEnd])
			{
				bFlag = false;
				break;
			}
			iStart++;
			iEnd--;
		}
		return bFlag;
	}
}

class Program263
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int iSize = sobj.nextInt();
		
		ChildX obj = new ChildX(iSize);
		
		obj.Accept();
		obj.Display();
		
		boolean bRet = obj.ChkPalindrome();
		if(bRet == true)
		{
			System.out.println("Array is palindrome");
		}
		else
		{
			System.out.println("Array is not palindrome");
		}
		
	}
}