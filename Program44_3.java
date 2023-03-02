// Write java program which accept array of characters from user and accept one character.
// Return occurence of that character without considering case 

import java.util.Scanner;

class  Array
{
	public char Arr[];
	public int Size;
	
	public Array(int No)
	{
		this.Size = No;
		Arr = new char[Size];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter elements in the array : ");
		for(int i = 0;i < Size;i++)
		{
			Arr[i] = sobj.next().charAt(0);
		}
	}
	
	public void Display()
	{
		System.out.println("\nelements in the array are : ");
		for(int i = 0;i < Size;i++)
		{
			System.out.print(Arr[i]+"\t");
		}
		
	}
	
	public int Occurence(char ch)
	{
		int Val = -1;
		
		for(int i = 0;i < Arr.length;i++)
		{
			if(Arr[i] == ch)
			{
				Val = i;
				break;
			}
		}
		
		return Val;
	}
	
}


class Program44_3
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of character array : ");
		int Size = sobj.nextInt();
		
		System.out.println("Enter one character : ");
		char ch = sobj.next().charAt(0);
		
		Array aobj = new Array(Size);
		
		aobj.Accept();
		aobj.Display();
		
		int Ret = aobj.Occurence(ch);
		if(Ret == -1)
		{
			System.out.println("\nThere is no element");
		}
		else
		{
			System.out.println("\nelement found at index : "+Ret);
		}
		
		
	}
}