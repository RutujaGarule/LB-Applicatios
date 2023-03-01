import java.util.*;

class Base
{
	public int CountDigits(String s)
	{
		int iCnt = 0;
		
		for(int i = 0;i < s.length();i++)
		{
			if(s.charAt(i) >= '0' && s.charAt(i) <= '9')
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}


class Program273
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String str = sobj.nextLine();
		
		Base bobj = new Base();
		
		int iRet = bobj.CountDigits(str);
		System.out.println("Number of digits are : "+iRet);
	}
}