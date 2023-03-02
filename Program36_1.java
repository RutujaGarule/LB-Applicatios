// Accept number of Rows and number of Columns and Display below pattern

/*
	Row = 4    Col = 4
	
	A	B	C	D
	A	B	C	D
	A	B	C	D
	A	B	C	D

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
	{
		char ch = 'A';
		
		for(int iCnt1 = 1;iCnt1 <= iRow;iCnt1++)
		{
			ch = 'A';
			for(int iCnt2 = 1;iCnt2 <= iCol;iCnt2++)
			{
				System.out.print(ch+"\t");
				ch++;
			}
			System.out.println();
		}
	}
}

class Program36_1
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