import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;  

class Program422
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("-----------Packer Unpacker CUI pannel-----------");
		
		try
		{
			System.out.println("Enter folder name which contains files that you want to pack : ");
			
			String FolderName =  sobj.nextLine();
			
			File fobj = new File(FolderName);
			
			System.out.println("Enter name of packed file that you want to create : ");
			String PackFile = sobj.nextLine();
			
			File fpackobj = new File(PackFile);
			fpackobj.createNewFile();
			
			FileOutputStream fout = new FileOutputStream(fpackobj);
			
			if(fobj.exists())
			{
				File allfiles[] = fobj.listFiles();
			
				System.out.println("File names are : ");
				
				byte Buffer[] = new byte[1024];
				int ret = 0;
				
				String name;
				
				for(int i = 0;i < allfiles.length;i++)
				{
					name = allfiles[i].getName();
					
					if(name.endsWith(".txt"))
					{
						name = name + " " + allfiles[i].length();
						System.out.println("Header : "+name+" with length : "+name.length());

						for(int j = name.length();j < 100;j++)
						{
							name = name + " ";
						}
						
						
						byte HeaderByte [] = name.getBytes();
						
						fout.write(HeaderByte,0,HeaderByte.length);
						
						FileInputStream fiobj = new FileInputStream(allfiles[i]);
					
						while((ret = fiobj.read(Buffer)) != -1)
						{
							fout.write(Buffer,0,ret);
						}
					}
					
				}
				
				System.out.println("-----------Summary---------------");
				System.out.println("Number of files scanned : "+allfiles.length);
			}
			else
			{
				System.out.println("There is no such folder");
			}
			
		}// End of try
		
		catch(Exception obj)
		{
			System.out.println("Exception occured : "+obj);
		}
	}	
}