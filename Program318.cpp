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
	SinglyLL <int>obj;
	
	obj.InsertFirst(101);
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.Display();
	
	int iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet<<"\n";
	
	return 0;
}