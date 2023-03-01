
import java.util.*;

class Numbers
{
	public int MultFactors(int iNo1)
	{
		int iCnt = 0;
		int iMult = 1;
		
		for(iCnt = 1;iCnt <= (iNo1/2);iCnt++)
		{
			if(iNo1 % iCnt == 0)
			{
				iMult = iMult * iCnt;
			}
		}
		return iMult;
	}
}

class Program253
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first number : ");
		int iNo1 = sobj.nextInt();
		
		Numbers nobj = new Numbers();
		
		int iRet = nobj.MultFactors(iNo1);
		
		System.out.println("Multiplication of factors of "+ iNo1 +" is : "+iRet);
	}
}