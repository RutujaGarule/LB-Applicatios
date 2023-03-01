// Doubly Linear Linked List Generic

#include<iostream>
using namespace std;

#pragma pck(1)
template <class T>
struct node
{
	T data;
	struct node * next;
	struct node * prev;
};

template <class T>
class DoublyLL
{
	public:
		struct node<T> * First;
		
		DoublyLL();
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
DoublyLL<T> :: DoublyLL()
{
	First = NULL;
}

template <class T>
void DoublyLL<T> :: InsertFirst(T no)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(First == NULL)
	{
		First = newn;
	}
	else
	{
		First->prev = newn;
		newn->next = First;
		First = newn;
	}
}

template <class T>
void DoublyLL<T> :: InsertLast(T no)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(First == NULL)
	{
		First = newn;
	}
	else
	{
		struct node<T> * temp = First;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		newn->prev = temp;
		temp->next = newn;
	}
}

template <class T>
void DoublyLL<T> :: InsertAtPos(T no,int ipos)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
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
		struct node<T> * temp = First;
		
		for(int i = 1;i < ipos-1;i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
	}
}

template <class T>
void DoublyLL<T> :: DeleteFirst()
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
		First = First->next;
		delete First->prev;
		First->prev = NULL;
	}
}

template <class T>
void DoublyLL<T> :: DeleteLast()
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
		struct node<T> * temp = First;
		
		while(temp->next->next != NULL)
		{
			temp= temp->next;
		}
		delete temp->next;
		temp->next = NULL;
	}
}

template <class T>
void DoublyLL<T> :: DeleteAtPos(int ipos)
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
		struct node<T> * temp1 = First;
		struct node<T> * temp2 = NULL;
		
		for(int i = 1;i < ipos-1;i++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp2->next->prev = temp1;
		temp1->next = temp2->next;
		delete temp2;
	}
}

template <class T>
void DoublyLL<T> :: Display()
{
	cout<<"Elements of linked list are : "<<"\n";
	struct node<T> * temp = First;
	
	while(temp != NULL)
	{
		cout<<"| "<<temp->data<<" |<=>";
		temp = temp->next;
	}
	cout<<"NULL"<<"\n";	
}

template <class T>
int DoublyLL<T> :: Count()
{
	struct node<T> * temp = First;
	int iCount = 0;
	
	while(temp != NULL)
	{
		iCount++;
		temp = temp->next;
	}
	return iCount;
}

int main()
{
	int iRet = 0;
	
	DoublyLL <char>cobj;
	cobj.InsertFirst('d');
	cobj.InsertFirst('c');
	cobj.InsertFirst('b');
	cobj.InsertFirst('a');
	cobj.InsertLast('z');
	cobj.InsertAtPos('r',4);
	cobj.DeleteAtPos(3);
	cobj.DeleteFirst();
	cobj.DeleteLast();
	cobj.Display();
	iRet = cobj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	DoublyLL <int>iobj;
	iobj.InsertFirst(101);
	iobj.InsertFirst(51);
	iobj.InsertFirst(21);
	iobj.InsertFirst(11);
	iobj.InsertLast(100);
	iobj.InsertAtPos(30,4);
	iobj.DeleteAtPos(3);
	iobj.DeleteFirst();
	iobj.DeleteLast();
	iobj.Display();
	iRet = iobj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";

	DoublyLL <float>fobj;
	fobj.InsertFirst(10.34f);
	fobj.InsertFirst(51.56f);
	fobj.InsertFirst(21.76f);
	fobj.InsertFirst(11.67f);
	fobj.InsertLast(100.1f);
	fobj.InsertAtPos(30.13,4);
	fobj.DeleteAtPos(3);
	fobj.DeleteFirst();
	fobj.DeleteLast();
	fobj.Display();
	iRet = fobj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	DoublyLL <double>dobj;
	dobj.InsertFirst(101.123);
	dobj.InsertFirst(51.674);
	dobj.InsertFirst(21.345);
	dobj.InsertFirst(11.987);
	dobj.InsertLast(22.222);
	dobj.InsertAtPos(30.456,4);
	dobj.DeleteAtPos(3);
	dobj.DeleteFirst();
	dobj.DeleteLast();
	dobj.Display();
	iRet = dobj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	
	return 0;
}