// Accept number of rows and columns and Display below pattern
/*
	Row = 6  	Col = 6
	
	*	*	*	*	*	*
	*   			*   *
	*			*	    *
	*		*			*
	*   *			    *
	*	*	*	*	*	*
	
*/

import java.util.Scanner;

class Pattern
{
	public int Row;
	public int Col;
	
	public Pattern(int i,int j)
	{
		Row = i;
		Col = j;
	}
	
	public void Display()
	{
		for(int i = 1;i <= Row;i++)
		{
			for(int j = Col;j > 0;j--)
			{
				if(i == j)
				{
					System.out.print("*"+"\t");
				}
				else if(i < j)
				{
					System.out.print("*"+"\t");
				}
				else
				{
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}
}

class Program40_3
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of Rows");
		int i = sobj.nextInt();
		System.out.println("Enter number of Column");
		int j = sobj.nextInt();
		
		Pattern pobj = new Pattern(i,j);
		pobj.Display();
	}	
}
