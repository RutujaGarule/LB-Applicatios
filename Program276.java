import java.util.*;

class Base
{
	public int CapitalCount(String s)
	{
		int iCnt = 0;
		char Arr[] = s.toCharArray();
		
		for(int i = 0;i < Arr.length;i++)
		{
			if(Arr[i] >= 'A' && Arr[i] <= 'Z')
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}


class Program276
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String str = sobj.nextLine();
		
		Base bobj = new Base();
		
		int iRet = bobj.CapitalCount(str);
		System.out.println("capital characters are : "+iRet);
	}
}