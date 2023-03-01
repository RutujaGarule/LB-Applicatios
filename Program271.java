import java.util.*;

class Base
{
	public int SmallCount(String s)
	{
		int iCnt = 0;
		
		for(int i = 0;i < s.length();i++)
		{
			if(s.charAt(i) >= 'a' && s.charAt(i) <= 'z')
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}


class Program271
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String str = sobj.nextLine();
		
		Base bobj = new Base();
		
		int iRet = bobj.SmallCount(str);
		System.out.println("smallcase characters are : "+iRet);
	
	}
}