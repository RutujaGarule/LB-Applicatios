import java.util.Scanner;

class ArrayX
{
	public int Arr[];
	
	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter " + Arr.length + " elements");
		
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.println("Enter the element no : "+ (iCnt+1));
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	public void Display()
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
	
	public int Addition()
	{
		int iSum = 0;
		
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}
		return iSum;
	}
}

class Program259
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int iSize = sobj.nextInt();
		
		ChildX obj = new ChildX(iSize);
		
		obj.Accept();
		obj.Display();
		
		int iRet = obj.Addition();
		System.out.println("Addition is : "+iRet);
	}
}