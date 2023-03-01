
import java.util.*;

class Numbers
{
	public void EvenFact(int No)
	{
		int iCnt = 0;
		
		for(iCnt = 1;iCnt <= (No/2);iCnt++)
		{
			if((No % iCnt == 0) && (iCnt % 2 == 0))
			{
				System.out.println(iCnt);
			}
		}
	}
}

class Program250
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number : ");
		int iNo = sobj.nextInt();
		
		Numbers nobj = new Numbers();
		
		nobj.EvenFact(iNo);
	}
}