import java.util.*;

class Node
{
	public int Data;
	public Node Next;
	
	public Node(int No)
	{
		this.Data = No;
		this.Next = null;
	}
}

class SinglyLL
{
	private Node Head;
	private int Count;
	
	public SinglyLL()
	{
		Head = null;
		Count = 0;
	}
	
	protected void finalize()
	{
		
	}
	
	public void InsertFirst(int No)
	{
		Node newn = new Node(No);
		
		if(this.Head == null)
		{
			this.Head = newn;
		}
		else
		{
			newn.Next = this.Head;
			this.Head = newn;
		}
		this.Count++;
	}
	
	public void InsertLast(int No)
	{
		Node newn = new Node(No);
		
		if(this.Head == null)
		{
			this.Head = newn;
		}
		else
		{
			Node temp = this.Head;
			for(int i = 1;i < Count;i++)
			{
				temp = temp.Next;
			}
			temp.Next = newn;
			newn = null;
			
		}
		this.Count++;
	}
	
	public void DeleteFirst()
	{
		if(this.Count == 0)
		{
			return;
		}
		else if(this.Count == 1)
		{
			this.Head = null;
		}
		else
		{
			Head = Head.Next;
		}
		
		this.Count--;
	}
	
	public void DeleteLast()
	{
		if(this.Count == 0)
		{
			return;
		}
		else if(this.Count == 1)
		{
			this.Head = null;
		}
		else
		{
			Node temp = this.Head;
			
			while(temp.Next.Next != null)
			{
				temp = temp.Next;
			}
			temp.Next = null;
		}
		
		this.Count--;
	}
	
	public void InsertAtPos(int No, int Pos)
	{
		if((Pos < 1) || (Pos > Count+1))
		{
			System.out.println("Invalid position");
			return;
		}
		
		if(Pos == 1)
		{
			InsertFirst(No);
		}
		else if(Pos == Count+1)
		{
			InsertLast(No);
		}
		else
		{
			Node newn = new Node(No);
			Node temp = this.Head;
			
			for(int i = 1;i < Pos-1;i++)
			{
				temp = temp.Next;
			}
			newn.Next = temp.Next;
			temp.Next = newn;
			
			this.Count++;
		}
		
	}
	
	public void DeleteAtPos(int Pos)
	{
		if((Pos < 1) || (Pos > Count))
		{
			System.out.println("Invalid position");
			return;
		}
		
		if(Pos == 1)
		{
			DeleteFirst();
		}
		else if(Pos == Count)
		{
			DeleteLast();
		}
		else
		{
			Node temp = this.Head;
			
			for(int i = 1;i < Pos-1;i++)
			{
				temp = temp.Next;
			}
			
			temp.Next = temp.Next.Next;
		
			this.Count--;
		}
		
	}
	
	public void Display()
	{
		Node temp = this.Head;
		System.out.println("Elements of linked list are : ");
		
		while(temp != null)
		{
			System.out.print("| "+temp.Data+" |->");
			
			temp = temp.Next;
		}
		
		System.out.println("NULL");
	}
	
	public int CountNodes()
	{
		return this.Count;
	}
}


class Program445
{
	public static void main(String a[])
	{
		SinglyLL obj = new SinglyLL();
		
		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);
		
		obj.InsertLast(101);
		obj.InsertLast(111);
		obj.InsertLast(121);
		obj.InsertLast(151);

		obj.DeleteFirst();
		obj.DeleteLast();
		
		obj.InsertAtPos(55,4);
		obj.DeleteAtPos(4);
		
		obj.Display();
		int Ret = obj.CountNodes();
		System.out.println("Number of nodes are : "+Ret);
	}
}