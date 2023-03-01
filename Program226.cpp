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

class SinglyCL
{
	public:
		PNODE First;
		PNODE Last;
		int iCount;
		
		SinglyCL();
		
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		
		void Display();	
};

SinglyCL :: SinglyCL()
{
	First = NULL;
	Last = NULL;
	iCount = 0;
}

void SinglyCL :: InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		Last->next = First;
	}
	else
	{
		newn->next = First;
		First = newn;
		Last->next = First;
	}
	
	iCount++;
}

void SinglyCL :: InsertLast(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		Last->next = First;
	}
	else
	{
		Last->next = newn;
		Last = newn;
		Last->next = First;
	}
	iCount++;
}
void SinglyCL :: InsertAtPos(int no,int ipos)
{
	if((ipos < 1) || (ipos > iCount+1))
	{
		cout<<"Invalid position"<<"\n";
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(no);
	}
	else if(ipos == iCount+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE temp = First;
		PNODE newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		
		for(int iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
	iCount++;
}

void SinglyCL :: DeleteFirst()
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
		First = First->next;
		Last->next = First;
		delete temp;
	}
	iCount--;
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
		Last->next = First;
	}
	iCount--;
}

void SinglyCL :: DeleteAtPos(int ipos)
{
	if((ipos < 1) || (ipos > iCount))
	{
		cout<<"Invalid position"<<"\n";
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst();
	}
	else if(ipos == iCount)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp1 = First;
		PNODE temp2 = NULL;
		
		for(int iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		delete temp2;
	}
	iCount--;
}

void SinglyCL :: Display()
{
	cout<<"Elements in linked list are : "<<"\n";
	
	do
	{
		cout<<First->data<<" -> ";
		First = First->next;
	}while(First != Last->next);
	
	cout<<"\n";
}


int main()
{
	SinglyCL obj;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n";
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n";
	
	
	obj.DeleteFirst();
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n";
	
	
	obj.DeleteLast();
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n";
	
	
	obj.InsertAtPos(105,4);
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n";
	
	obj.DeleteAtPos(4);
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n";
	
	return 0;
}