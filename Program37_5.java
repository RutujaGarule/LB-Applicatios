// Accept number of Rows and number of Columns and Display below pattern

/*
	Row = 3    Col = 4
	
	1	1	1	1
	2	2	2	2
	3	3	3	3
	
*/

import java.util.Scanner;

class Pattern
{
	public int iRow;
	public int iCol;
	
	public Pattern(int a,int b)
	{
		iRow = a;
		iCol = b;
	}
	
	public void Display()
	{
		for(int i = 1;i <= iRow;i++)
		{
			for(int j = 1;j <= iCol;j++)
			{
				System.out.print(i+"\t");
			}
			System.out.println();
		}	
	}
}

class Program37_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of Rows : ");
		int iRow = sobj.nextInt();
		
		System.out.println("Enter the number of Columns : ");
		int iCol = sobj.nextInt();
		
		Pattern pobj = new Pattern(iRow,iCol);
		pobj.Display();
	}
}