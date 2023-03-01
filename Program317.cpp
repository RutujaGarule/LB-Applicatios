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

class SinglyLL
{
	public:
		PNODE First;
		
		SinglyLL();
		void InsertFirst(int);
		void Display();
		int Count();
};

SinglyLL :: SinglyLL()
{
	First = NULL;
}

void SinglyLL :: InsertFirst(int no)
{
	PNODE newn = new NODE;
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
void SinglyLL :: Display()
{
	cout<<"Elements of linked list are : "<<"\n";
	
	PNODE Temp = First;
	
	while(Temp != NULL)
	{
		cout<<Temp->data<<"\t";
		Temp = Temp->next;	
	}
	cout<<"NULL"<<"\n";
}

int SinglyLL :: Count()
{
	int iCount = 0;
	PNODE Temp = First;
	
	while(Temp != NULL)
	{
		iCount++;
		Temp = Temp->next;	
	}
	return iCount;
}

int main()
{
	SinglyLL obj;
	
	obj.InsertFirst(101);
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.Display();
	
	int iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	return 0;
}