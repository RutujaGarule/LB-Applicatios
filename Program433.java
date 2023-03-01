import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;  

class Program433
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
			
			
			if(fpackobj.exists())
			{
				System.out.println("Packed file is there..");
				
				byte Header[] = new byte[100];
				
				fin.read(Header,0,100);
				
				String StrHeader = new String(Header);
				
				System.out.println(StrHeader);
				
				String Arr[] = StrHeader.split(" ");
				System.out.println("File name : "+Arr[0]);
				System.out.println("File size is : "+Arr[1]);
				
				File obj = new File(Arr[0]);
				
				obj.createNewFile();
				
				int FileSize = Integer.parseInt(Arr[1]);
				
				byte DataArray[] = new byte[FileSize];
				
				fin.read(DataArray,0,FileSize);
				
				FileOutputStream fout = new FileOutputStream(obj);
				fout.write(DataArray,0,FileSize);

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