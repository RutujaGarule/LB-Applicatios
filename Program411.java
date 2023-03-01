import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;  

class Program411
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		try
		{
			System.out.println("Enter folder name : ");
			String FolderName =  sobj.nextLine();
			
			File fobj = new File(FolderName);
			
			if(fobj.exists())
			{
				File allfiles[] = fobj.listFiles();
				
				System.out.println("Number of files are : "+allfiles.length);
				
				System.out.println("File names are : ");
				
				byte Buffer[] = new byte[1024];
				int ret = 0;
				
				
				for(int i = 0;i < allfiles.length;i++)
				{
					System.out.println(allfiles[i].getName()+" Size : "+allfiles[i].length());
					
					FileInputStream fiobj = new FileInputStream(allfiles[i]);
					
					while((ret = fiobj.read(Buffer)) != -1)
					{
						String str = new String(Buffer,StandardCharsets.UTF_8);
						System.out.println(str);
					}
				}
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