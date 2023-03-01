import java.util.*;
import java.io.*;


class Program410
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
				
				for(int i = 0;i < allfiles.length;i++)
				{
					System.out.println(allfiles[i].getName()+"Size : "+allfiles[i].length());
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