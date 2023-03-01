import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;  

class Program434
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("-----------Packer Unpacker CUI pannel-----------");
		
		try
		{
			System.out.println("Enter name of packed file : ");
			System.out.println("Note : packed file should be in current directory");
			
			String PackFile =  sobj.nextLine();
			
			File fpackobj = new File(PackFile);
			
			FileInputStream fin = new FileInputStream(fpackobj);
			
			byte Header[] = new byte[100];
			int Ret = 0;

			if(fpackobj.exists())
			{
				while((Ret = fin.read(Header,0,100)) > 0)
				{
					String StrHeader = new String(Header);
				
					String Arr[] = StrHeader.split(" ");
					
					File obj = new File(Arr[0]);
					obj.createNewFile();
					
					int FileSize = Integer.parseInt(Arr[1]);
					
					byte DataArray[] = new byte[FileSize];
					
					fin.read(DataArray,0,FileSize);
					
					FileOutputStream fout = new FileOutputStream(obj);
					fout.write(DataArray,0,FileSize);
				}
			}
			else
			{
				System.out.println("There is no such packfile");
			}
			
		}// End of try
		
		catch(Exception obj)
		{
			System.out.println("Exception occured : "+obj);
		}
	}	
}