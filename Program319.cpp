// Singly Linear Linked List Generic

#include<iostream>
using namespace std;

#pragma pack(1)

template <class T>
struct node
{
	T data;
	struct node * next;
};

template <class T>
class SinglyLL
{
	public:
		struct node<T> * First;
		
		SinglyLL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T,int);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		void Display();
		int Count();
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
	First = NULL;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	
	if(First == NULL)
	{
		First = newn;
	}
	else
	{
		newn->next = First;
		First = newn;
	}
}

template <class T>
void SinglyLL<T> :: InsertLast(T no)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	struct node<T> * Temp = First;
	
	if(First == NULL)
	{
		First = newn;
	}
	else if(First->next == NULL)
	{
		First->next = newn;
	}
	else
	{
		while(Temp->next != NULL)
		{
			Temp = Temp->next;
		}
		Temp->next = newn;
	}
}

template <class T>
void SinglyLL<T> :: InsertAtPos(T no,int ipos)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	
	int iCnt = Count();
	
	if((ipos < 1) || (ipos > iCnt+1))
	{
		cout<<"Invalid position"<<"\n";
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(no);
	}
	else if(ipos == iCnt+1)
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> * Temp = First;
		for(int i = 1;i < ipos-1;i++)
		{
			Temp = Temp->next;
		}
		newn->next = Temp->next;
		Temp->next = newn;
	}
}

template <class T>
void SinglyLL<T> :: DeleteFirst()
{
	if(First == NULL)
	{
		return;
	}
	else if(First->next == NULL)
	{
		delete First;
		First = NULL;
	}
	else
	{
		struct node<T> * Temp = First;
		First = First->next;
		delete Temp;
	}
}

template <class T>
void SinglyLL<T> :: DeleteLast()
{
	if(First == NULL)
	{
		return;
	}
	else if(First->next == NULL)
	{
		delete First;
		First = NULL;
	}
	else
	{
		struct node<T> * Temp = First;
		while(Temp->next->next != NULL)
		{
			Temp = Temp->next;
		}
		delete Temp->next;
		Temp->next = NULL;
	}
}

template <class T>
void SinglyLL<T> :: DeleteAtPos(int ipos)
{
	int iCnt = Count();
	
	if((ipos < 1) || (ipos > iCnt))
	{
		cout<<"Invalid position"<<"\n";
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst();
	}
	else if(ipos == iCnt)
	{
		DeleteLast();
	}
	else
	{
		struct node<T> * Temp1 = First;
		struct node<T> * Temp2 = NULL;
		
		for(int i = 1;i < ipos-1;i++)
		{
			Temp1 = Temp1->next;
		}
		Temp2 = Temp1->next;
		Temp1->next = Temp2->next;
		delete Temp2;	
	}
}

template <class T>
void SinglyLL<T> :: Display()
{
	cout<<"Elements of linked list are : "<<"\n";
	
	struct node<T> * Temp = First;
	
	while(Temp != NULL)
	{
		cout<<Temp->data<<"\t";
		Temp = Temp->next;	
	}
	cout<<"NULL"<<"\n";
}

template <class T>
int SinglyLL<T> :: Count()
{
	int iCount = 0;
	struct node<T> * Temp = First;
	
	while(Temp != NULL)
	{
		iCount++;
		Temp = Temp->next;	
	}
	return iCount;
}

int main()
{
	int iRet = 0;
	
	SinglyLL <char>cobj;
	cobj.InsertFirst('b');
	cobj.InsertFirst('a');
	cobj.InsertFirst('c');
	cobj.InsertFirst('d');
	cobj.InsertLast('z');
	cobj.InsertAtPos('r',4);
	cobj.DeleteAtPos(3);
	cobj.DeleteFirst();
	cobj.DeleteLast();
	cobj.Display();
	iRet = cobj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	SinglyLL <int>iobj;
	iobj.InsertFirst(21);
	iobj.InsertFirst(11);
	iobj.InsertFirst(51);
	iobj.InsertFirst(451);
	iobj.InsertLast(101);
	iobj.InsertAtPos(100,4);
	iobj.DeleteAtPos(3);
	iobj.DeleteFirst();
	iobj.DeleteLast();
	iobj.Display();
	iRet = iobj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	SinglyLL <float>fobj;
	fobj.InsertFirst(21.1f);
	fobj.InsertFirst(11.1f);
	fobj.InsertFirst(235.1f);
	fobj.InsertFirst(61.1f);
	fobj.InsertLast(51.36f);
	fobj.InsertAtPos(10.45,4);
	fobj.DeleteAtPos(3);
	fobj.DeleteFirst();
	fobj.DeleteLast();
	fobj.Display();
	iRet = fobj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	SinglyLL <double>dobj;
	dobj.InsertFirst(21.13);
	dobj.InsertFirst(11.12);
	dobj.InsertFirst(56.13);
	dobj.InsertFirst(561.12);
	dobj.InsertLast(78.354);
	dobj.InsertAtPos(10.2345,4);
	dobj.DeleteAtPos(3);
	dobj.DeleteFirst();
	dobj.DeleteLast();
	dobj.Display();
	iRet = dobj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	return 0;
}