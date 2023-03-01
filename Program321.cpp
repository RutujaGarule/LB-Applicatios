// Singly Circular Linked List Generic

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
class SinglyCL
{
	public:
		struct node<T> * First;
		struct node<T> * Last;
		
		SinglyCL();
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
SinglyCL<T> :: SinglyCL()
{
	First = NULL;
	Last = NULL;
}

template <class T>
void SinglyCL<T> :: InsertFirst(T no)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = newn;
		Last = First;
	}
	else
	{
		newn->next = First;
		First = newn;
		Last->next = First;
	}
}

template <class T>
void SinglyCL<T> :: InsertLast(T no)
{
	struct node<T> * newn = new struct node<T>;
	newn->data = no;
	newn->next = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = newn;
		Last = First;
	}
	else
	{
		Last->next = newn;
		Last = newn;
		Last->next = First;
	}
}

template <class T>
void SinglyCL<T> :: InsertAtPos(T no,int ipos)
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
		struct node<T> * temp = First;
		
		for(int i = 1;i < ipos-1;i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
}


template <class T>
void SinglyCL<T> :: DeleteFirst()
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
		delete Last->next;
		Last->next = First;
	}
}

template <class T>
void SinglyCL<T> :: DeleteLast()
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
		Last = temp;
		Last->next = First;	
	}
}

template <class T>
void SinglyCL<T> :: DeleteAtPos(int ipos)
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
		temp1->next = temp2->next;
		delete temp2;
	}
}


template <class T>
void SinglyCL<T> :: Display()
{
	cout<<"Elements of linked list are : "<<"\n";
	struct node<T> * temp = First;
	
	do
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp->next;
	}while(temp != First);
	cout<<"\n";
}

template <class T>
int SinglyCL<T> :: Count()
{
	struct node<T> * temp = First;
	int iCnt = 0;
	
	do
	{
		iCnt++;
		temp = temp->next;
	}while(temp != First);
	
	return iCnt;
}


int main()
{
	int iRet = 0;
	
	SinglyCL <char>cobj;
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
	
	SinglyCL <int>iobj;
	iobj.InsertFirst(101);
	iobj.InsertFirst(51);
	iobj.InsertFirst(21);
	iobj.InsertFirst(11);
	iobj.InsertLast(100);
	iobj.InsertAtPos(10,4);
	iobj.DeleteAtPos(3);
	iobj.DeleteFirst();
	iobj.DeleteLast();
	iobj.Display();
	iRet = iobj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";

	SinglyCL <float>fobj;
	fobj.InsertFirst(101.68f);
	fobj.InsertFirst(51.23f);
	fobj.InsertFirst(21.56f);
	fobj.InsertFirst(11.93f);
	fobj.InsertLast(12.657f);
	fobj.InsertAtPos(10.23f,4);
	fobj.DeleteAtPos(3);
	fobj.DeleteFirst();
	fobj.DeleteLast();
	fobj.Display();
	iRet = fobj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	SinglyCL <double>dobj;
	dobj.InsertFirst(101.57);
	dobj.InsertFirst(51.08);
	dobj.InsertFirst(21.789);
	dobj.InsertFirst(11.68);
	dobj.InsertLast(124.75);
	dobj.InsertAtPos(54.67,4);
	dobj.DeleteAtPos(3);
	dobj.DeleteFirst();
	dobj.DeleteLast();
	dobj.Display();
	iRet = dobj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	
	return 0;
}