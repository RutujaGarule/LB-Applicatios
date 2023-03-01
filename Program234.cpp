// Doubly circular linked list in C++

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
		First = Last = newn;
		(First)->prev = First;
		(Last)->next = First;
	}
	else 
	{
		newn->next = First;
		(First)->prev = newn;
		First = newn;
		(First)->prev = newn;
		(Last)->next = First;
	}
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
		(First)->prev = First;
		(Last)->next = First;
	}
	else
	{
		(Last)->next = newn;
		newn->prev = Last;
		Last = newn;
		(Last)->next = First;
		(First)->prev = Last;
	}
}

void DoublyCL :: InsertAtPos(int no,int ipos)
{
	int iNodeCnt = 0;
	iNodeCnt = Count();
	PNODE newn = NULL;
	PNODE temp = NULL;
	int iCnt = 0;
	
	if((ipos < 1) || (ipos > iNodeCnt+1))
	{
		printf("Invalid Position\n");
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
		temp = First;
		newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		for(iCnt = 1;iCnt< ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->prev = temp;
		newn->next = temp->next;
		temp->next = newn;
		newn->next->prev = newn;
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
		First = Last = NULL;
	}
	else
	{
		First = (First)->next;
		delete (First)->prev;
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
		First = Last = NULL;
	}
	else
	{
		Last = (Last)->prev;
		delete (Last)->next;
		(Last)->next = First;
		(First)->prev = Last;
	}
}

void DoublyCL :: DeleteAtPos(int ipos)
{
	int iNodeCnt = 0;
	iNodeCnt = Count();
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;
	int iCnt = 0;
	
	if((ipos < 1) || (ipos > iNodeCnt))
	{
		printf("Invalid Position\n");
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
		temp1 = First;
		
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		temp2->next->prev = temp1;
		free(temp2);
		
	}
}

void DoublyCL :: Display()
{
	PNODE temp = First;
	
	cout<<"Elements in linkedlist are : "<<"\n";
	
	do
	{
		cout<<"| "<<temp->data<<" | <=>";
		temp = temp->next;
	}while(temp != Last->next);	
	
	cout<<"\n";
}

int DoublyCL :: Count()
{
	PNODE temp = First;
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
	DoublyCL obj;
	
	int iRet = 0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";

	obj.InsertAtPos(105,4);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	obj.DeleteAtPos(4);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";

	obj.DeleteFirst();
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	obj.DeleteLast();
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";

	return 0;
}