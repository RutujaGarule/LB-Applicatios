// Doubly circular linked list 

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
	int data;
	struct node * next;
	struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCL
{
	public:
		PNODE First;
		PNODE Last;
		
		DoublyCL();
		
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		
		void Display();
		int Count();
		
};

DoublyCL :: DoublyCL()
{
	First = NULL;
	Last = NULL;
}

void DoublyCL :: InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = newn;
		Last = newn;
	}
	else
	{
		newn->next = First;
		(First)->prev = newn;
		First = newn;
	}
	(First)->prev = Last;
	(Last)->next = First;	
}

void DoublyCL :: InsertLast(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		(Last)->next = First;
	}
	else
	{
		(Last)->next = newn;
		newn->prev = Last;
		Last = newn;
	}
	(First)->prev = Last;
	(Last)->next = First;
}

void DoublyCL :: InsertAtPos(int no,int ipos)
{
	int iNodeCnt = 0;
	int iCnt = 0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	iNodeCnt = Count();
	
	if((ipos < 1) || (ipos > iNodeCnt+1))
	{
		cout<<"Invalid Position"<<"\n";
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(no);
	}
	else if(ipos == iNodeCnt+1)
	{
		InsertLast(no);
	}
	else
	{
		newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		temp = First;
		
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
	}
}

void DoublyCL :: DeleteFirst()
{
	if((First == NULL) && (Last == NULL))
	{
		return;
	}
	else if(First == Last)
	{
		delete First;
		First = NULL;
		Last = NULL;
	}
	else
	{
		First = (First)->next;
		delete (Last)->next;
		(First)->prev = Last;
		(Last)->next = First;
	}
}

void DoublyCL :: DeleteLast()
{
	if((First == NULL) && (Last == NULL))
	{
		return;
	}
	else if(First == Last)
	{
		delete First;
		First = NULL;
		Last = NULL;
	}
	else
	{
		Last = (Last)->prev;
		delete (Last)->next;
		(First)->prev = Last;
		(Last)->next = First;
	}
}

void DoublyCL :: DeleteAtPos(int ipos)
{
	int iNodeCnt = 0;
	int iCnt = 0;
	PNODE temp = NULL;
	iNodeCnt = Count();
	
	if((ipos < 1) || (ipos > iNodeCnt))
	{
		cout<<"Invalid Position"<<"\n";
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst();
	}
	else if(ipos == iNodeCnt)
	{
		DeleteLast();
	}
	else
	{
		temp = First;
		
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		
		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
	}
}

void DoublyCL :: Display()
{
	PNODE temp = First;
	
	if(First == NULL && Last == NULL)
	{
		cout<<"Linked list is empty"<<"\n";
		return;
	}
	
	cout<<"Elements in linked list are : "<<"\n";
	
	do
	{
		cout<<"| "<<(temp)->data<<" | <=>";
		temp = (temp)->next;
	}while(temp != (Last)->next);
	
	cout<<"\n";
}

int DoublyCL :: Count()
{
	int iCnt = 0;
	PNODE temp = First;
	
	if(First == NULL && Last == NULL)
	{
		return iCnt;
	}
	
	do
	{
		iCnt++;
		temp = (temp)->next;
	}while(temp != (Last)->next);
	
	return iCnt;
}

int main()
{
	DoublyCL obj;
	
	int iRet = 0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	obj.InsertAtPos(105,5);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	obj.DeleteAtPos(5);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	obj.DeleteFirst();
	obj.DeleteLast();
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	return 0;
}