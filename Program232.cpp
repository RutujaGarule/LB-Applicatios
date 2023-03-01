// singly circular linked list in c++

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
	public:
		PNODE First;
		PNODE Last;
		
		SinglyCL();
		
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		
		void Display();
		int Count();
};

SinglyCL :: SinglyCL()
{
	First = NULL;
	Last = NULL;
}

void SinglyCL :: InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		(Last)->next = First;
	}
	else
	{
		newn->next = First;
		First = newn;
		(Last)->next = First;
	}
}

void SinglyCL :: InsertLast(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		(Last)->next = First;
	}
	else
	{
		(Last)->next = newn;
		Last = newn;
		(Last)->next = First;
	}
}

void SinglyCL :: InsertAtPos(int no,int ipos)
{
	int iNodeCnt = 0;
	iNodeCnt = Count();
	PNODE temp = First;
	int iCnt = 0;
	
	if((ipos < 1) || (ipos > (iNodeCnt+1)))
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
		PNODE newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
}

void SinglyCL :: DeleteFirst()
{
	PNODE temp = First;
	
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
		delete temp;
		(Last)->next = First;
	}
}

void SinglyCL :: DeleteLast()
{
	PNODE temp = NULL;
	
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
		temp = First;
		while(temp->next->next != First)
		{
			temp = temp->next;
		}
		delete temp->next;
		Last = temp;
		(Last)->next = First;
	}
}

void SinglyCL :: DeleteAtPos(int ipos)
{
	int iNodeCnt = 0;
	iNodeCnt = Count();
	PNODE temp1 = First;
	PNODE temp2 = NULL;
	int iCnt = 0;
	
	if((ipos < 1) || (ipos > (iNodeCnt)))
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
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		delete temp2;
	}
}

void SinglyCL :: Display()
{
	PNODE temp = First;
	
	cout<<"Elements of linked list are : "<<"\n";
	
	do
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp->next;
	}while(temp != Last->next);
	cout<<"\n";
}

int SinglyCL :: Count()
{	PNODE temp = First;

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
	SinglyCL obj;
	
	int iRet = 0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);

	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";
	
	obj.InsertAtPos(105,4);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";
	
	obj.DeleteAtPos(4);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";
	
	obj.DeleteFirst();
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";
	
	obj.DeleteLast();
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";
	
	
	return 0;
}