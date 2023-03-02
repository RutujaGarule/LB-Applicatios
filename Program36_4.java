// Accept number of Rows and number of Columns and Display below pattern

/*
	Row = 4    Col = 5
	
	4	4	4	4	4
	3	3	3	3	3
	2	2	2	2	2
	1	1	1	1	1

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
		for(int i = iRow;i >= 1;i--)
		{
			for(int j = 1;j <= iCol;j++)
			{
				System.out.print(i+"\t");
			}
			System.out.println();
		}
	}
}

class Program36_4
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