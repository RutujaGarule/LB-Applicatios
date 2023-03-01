import java.util.*;


class Program495
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String : ");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		HashMap <Character,Integer> hobj = new HashMap();
		int Frequency = 0;
		
		for(char ch : Arr)
		{
			if(hobj.containsKey(ch))
			{
				Frequency = hobj.get(ch);
				hobj.put(ch,Frequency+1);
			}
			else
			{
				hobj.put(ch,1);
			}
		}
		
		System.out.println(hobj);
	}
	
}