import java.util.*;


class Program498
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String : ");
		String str = sobj.nextLine();
		
		String Arr[] = str.split(" ");
		
		HashMap <String,Integer> hobj = new HashMap();
		int Frequency = 0;
		
		for(String ch : Arr)
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