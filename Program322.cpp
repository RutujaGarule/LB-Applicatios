// Doubly Circular Linked List Generic

#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
	T data;
	struct node * next;
	struct node * prev;
};

template <class T>
class DoublyCL
{
	public:
		struct node<T> * First;
		struct node<T> * Last;
		
		DoublyCL();
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
DoublyCL<T> :: DoublyCL()
{
	First = NULL;
	Last = NULL;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		First->prev = Last;
		Last->next = First;
	}
	else
	{
		newn->next = First;
		First->prev = newn;
		First = First->prev;
		First->prev = Last;
		Last->next = First;
	}
}

template <class T>
void DoublyCL<T> :: InsertLast(T no)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		First->prev = Last;
		Last->next = First;
	}
	else
	{
		Last->next = newn;
		newn->prev = Last;
		Last = Last->next;
		Last->next = First;
		First->prev = Last;
	}
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T no,int ipos)
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
void DoublyCL<T> :: DeleteFirst()
{
	if((First == NULL) && (Last == NULL))
	{
		return;
	}
	else if(First == Last)
	{
		delete First;
		First = Last = NULL;
	}
	else
	{
		First = First->next;
		First->prev = Last;
		delete Last->next;
		Last->next = First;
	}
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
	if((First == NULL) && (Last == NULL))
	{
		return;
	}
	else if(First == Last)
	{
		delete First;
		First = Last = NULL;
	}
	else
	{
		struct node<T> * temp = First;
		while(temp->next->next != First)
		{
			temp = temp->next;
		}
		delete temp->next;
		temp->next = First;
		Last = temp;
		First->prev = temp;
	}
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int ipos)
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
		struct node<T> * temp = First;
		
		for(int i = 1;i < ipos-1;i++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
	}
}

template <class T>
void DoublyCL<T> :: Display()
{
	cout<<"Elements of linked list are : "<<"\n";
	struct node<T> * temp = First;
	
	do
	{
		cout<<"| "<<temp->data<<" |<=>";
		temp = temp->next;
	}while(temp != Last->next);
	
	cout<<"\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
	struct node<T> * temp = First;
	int iCnt = 0;
	
	do
	{
		iCnt++;
		temp = temp->next;
	}while(temp != Last->next);
	
	return iCnt;
}


int main()
{
	int iRet = 0;
	
	DoublyCL <char>cobj;
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
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	DoublyCL <int>iobj;
	iobj.InsertFirst(101);
	iobj.InsertFirst(51);
	iobj.InsertFirst(21);
	iobj.InsertFirst(11);
	iobj.InsertLast(10);
	iobj.InsertAtPos(20,4);
	iobj.DeleteAtPos(3);
	iobj.DeleteFirst();
	iobj.DeleteLast();
	iobj.Display();
	iRet = iobj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	DoublyCL <float>fobj;
	fobj.InsertFirst(101.12f);
	fobj.InsertFirst(51.11f);
	fobj.InsertFirst(21.56f);
	fobj.InsertFirst(11.67f);
	fobj.InsertLast(10.65f);
	fobj.InsertAtPos(20.6f,4);
	fobj.DeleteAtPos(3);
	fobj.DeleteFirst();
	fobj.DeleteLast();
	fobj.Display();
	iRet = fobj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	DoublyCL <double>dobj;
	dobj.InsertFirst(101.123);
	dobj.InsertFirst(51.456);
	dobj.InsertFirst(21.754);
	dobj.InsertFirst(11.788);
	dobj.InsertLast(10.234);
	dobj.InsertAtPos(20.745,4);
	dobj.DeleteAtPos(3);
	dobj.DeleteFirst();
	dobj.DeleteLast();
	dobj.Display();
	iRet = dobj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";

	return 0;
}