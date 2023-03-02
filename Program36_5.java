// Accept number of Rows and number of Columns and Display below pattern

/*
	Row = 3    Col = 4
	
	1	2	3	4
	5	6	7	8
	9	10	11	12

*/

import java.util.Scanner;

class Pattern
{
	public int iRow;
	public int iCol;
	
	public Pattern(int i,int j)
	{
		iRow = i;
		iCol = j;
	}
	
	public void Display()
	{	int Count = 1;
	
		for(int iCnt1 = 1;iCnt1 <= iRow;iCnt1++)
		{
			for(int iCnt2 = 1;iCnt2 <= iCol;iCnt2++)
			{
				System.out.print(Count+"\t");
				Count++;
			}
			System.out.println();
		}
	}
}

class Program36_5
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