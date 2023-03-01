import java.util.*;

class Student
{
	public String Sname;
	public int Marks;
	public int Rollno;
	public static int Generator;
	
	static
	{
		Generator = 0;
	}
	
	public Student(String str, int no)
	{
		this.Sname = str;
		this.Marks = no;
		Generator++;
		this.Rollno = Generator;
	}
	
	public void Display()
	{
		System.out.println("Roll No : "+Rollno+" Name : "+Sname+" Marks : "+Marks);
	}
	
	
}

class DBMS
{
	public LinkedList <Student> lobj;
	
	public DBMS()
	{
		lobj = new LinkedList();
	}
	
	public void StartDBMS()
	{
		System.out.println("Customised DBMS Started Sucessfully...");
		
		Scanner sobj = new Scanner(System.in);
		String Query = " ";
		int QuerySize = 0;
		
		while(true)
		{
			System.out.print("Customised DBMS : > ");
			Query = sobj.nextLine();
			
			String Tokens[] = Query.split(" ");
			QuerySize = Tokens.length;
			
			if(QuerySize == 1)
			{
				if("help".equals(Tokens[0]))
				{
					System.out.println("This application is used to demonstarte the features of customised DBMS.");
					System.out.println("Display All data : select * from student");
					System.out.println("Insert new record : insert into student values Name marks");
					System.out.println("Terminate the project : exit");
				}
				else if("exit".equals(Tokens[0]))
				{
					System.out.println("Thank you for using application...");
					break;
				}
			}
			else if(QuerySize == 2)
			{
				
			}
			else if(QuerySize == 3)
			{
				
			}
			else if(QuerySize == 4)
			{
				if("select".equals(Tokens[0]))
				{
					if("*".equals(Tokens[1]))
					{
						DisplayAll();
					}
				}
			}
			else if(QuerySize == 6)
			{
				if("insert".equals(Tokens[0]))
				{
					if("student".equals(Tokens[2]))
					{
						Insert(Tokens[4],Integer.parseInt(Tokens[5]));
					}
				}
			}
		}//end of while
	}
	
	public void Insert(String str,int no)
	{
		Student sobj = new Student(str,no);
		lobj.add(sobj);
	}
	
	public void DisplayAll()
	{	
		for(Student sref : lobj)
		{
			sref.Display();
		}
	}
	
	public void DisplaySpecific(int Value)
	{
		for(Student sref : lobj)
		{
			if(sref.Rollno == Value)
			{
				sref.Display();
				break;
			}
		}
	}
	
	public void DisplaySpecific(String str)
	{
		for(Student sref : lobj)
		{
			if(str.equals(sref.Sname))
			{
				sref.Display();
				break;
			}
		}
	}
	
	public void Delete(int no)
	{
		int index = 0;
		
		for(Student sref : lobj)
		{
			if(sref.Rollno == no)
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}
	
	public void Delete(String str)
	{
		int index = 0;
		
		for(Student sref : lobj)
		{
			if(str.equals(sref.Sname))
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}
	
	public void Sum()
	{
		int Sum = 0;
		
		for(Student sref : lobj)
		{
			Sum = Sum + (sref.Marks);
		}
		
		System.out.println("Summation of marks is : "+Sum);
	}
	
	public void Max()
	{
		int Max = 0;
		
		for(Student sref : lobj)
		{
			if(Max < sref.Marks)
			{
				Max = sref.Marks;
			}
		}
		
		System.out.println("maximum marks is : "+Max);
	}
	
	public void Min()
	{
		Student s = lobj.get(0);
		
		int Min = s.Marks;
		
		for(Student sref : lobj)
		{
			if(Min > sref.Marks)
			{
				Min = sref.Marks;
			}
		}
		
		System.out.println("Minimum marks is : "+Min);
	}
	
	public void Avg()
	{
		int Sum = 0;
		
		for(Student sref : lobj)
		{
			Sum = Sum + (sref.Marks);
		}
		
		System.out.println("Average of marks is : "+(Sum)/lobj.size());
	}
	
}

class Program494
{
	public static void main(String a[])
	{
		DBMS dobj = new DBMS();
		
		dobj.StartDBMS();
		
		
	}
}