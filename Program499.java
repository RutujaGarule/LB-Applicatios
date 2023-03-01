import java.util.*;


class Program499
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
		
		Set <String> setobj = hobj.keySet();
		
		int iMax = 0;
		String cMax = " ";
		
		
		for(String value : setobj)
		{
			if(iMax < hobj.get(value))
			{
				iMax = hobj.get(value);
				cMax = value;
			}
		}
		
		System.out.println("Maximum times occured word is : "+cMax+" with frequency "+iMax);
		
		
	}
	
}