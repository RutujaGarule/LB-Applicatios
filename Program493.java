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

class Program493
{
	public static void main(String a[])
	{
		DBMS dobj = new DBMS();
		
		dobj.StartDBMS();
		
		dobj.Insert("Kartik",90);
		dobj.Insert("Rutuja",96);
		dobj.Insert("Ankit",80);
		dobj.Insert("Pooja",67);
		dobj.Insert("Ram",91);

		dobj.DisplayAll();
		
		dobj.DisplaySpecific(3);
		dobj.DisplaySpecific("Rutuja");
		
		dobj.Delete(3);
		dobj.Delete("Ram");
		dobj.DisplayAll();
		
		dobj.Max();
		dobj.Sum();
		dobj.Min();
		dobj.Avg();
	}
}