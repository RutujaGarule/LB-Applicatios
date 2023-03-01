import java.util.*;

class Base
{
	public int CapitalCount(String s)
	{
		int iCnt = 0;
		
		for(int i = 0;i < s.length();i++)
		{
			if(s.charAt(i) >= 'A' && s.charAt(i) <= 'Z')
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}


class Program272
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