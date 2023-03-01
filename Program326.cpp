// Queue generic

#include<iostream>
using namespace std;

template <class T>
struct node
{
	T data;
	struct node * next;
};

template <class T>
class Queue
{
	public:
		struct node<T> * First;
		int iCount;
		
		Queue();
		
		bool IsQueueEmpty();
		void EnQueue(T no);
		T DeQueue();
		void Display();
	
};

template <class T>
Queue<T> :: Queue()
{
	First = NULL;
	iCount = 0;
}

template <class T>
bool Queue<T> :: IsQueueEmpty()
{
	if(iCount == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
void Queue<T> :: EnQueue(T no)
{
	struct node<T> * newn = new node<T>;
	newn->data = no;
	newn->next = NULL;
	
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
		temp->next = newn;
	}
	iCount++;
	
	cout<<no<<" gets pushed in Queue successfully"<<"\n";
}

template <class T>
T Queue<T> :: DeQueue()
{
	if(First == NULL)
	{
		cout<<"Unable to pop the element as Queue is empty"<<"\n";
		return (T)-1;
	}
	else
	{
		T value = First->data;
		struct node<T> * temp = First;
		First = First->next;
		delete temp;
		
		iCount--;
		
		return value;
	}
} 

template <class T>
void Queue<T> :: Display()
{
	if(First == NULL)
	{
		cout<<"Queue is empty"<<"\n";
	}
	else
	{
		cout<<"Elements of Queue are : "<<"\n";
		
		struct node<T> * temp= First;
		
		while(temp != NULL)
		{
			cout<<"| "<<temp->data<<" |->";
			temp = temp->next;
		}
		cout<<" NULL"<<"\n";
	}
}

int main()
{
	Queue <char>cobj;
	cobj.EnQueue('a');
	cobj.EnQueue('b');
	cobj.EnQueue('c');
	cobj.EnQueue('d');
	cobj.Display();
	char cRet = cobj.DeQueue();
	cout<<"Poped element is : "<<cRet<<"\n";
	cRet = cobj.DeQueue();
	cout<<"Poped element is : "<<cRet<<"\n";
	cobj.Display();
	
	
	Queue <int>iobj;
	iobj.EnQueue(11);
	iobj.EnQueue(21);
	iobj.EnQueue(51);
	iobj.EnQueue(101);
	iobj.Display();
	int iRet = iobj.DeQueue();
	cout<<"Poped element is : "<<iRet<<"\n";
	iRet = iobj.DeQueue();
	cout<<"Poped element is : "<<iRet<<"\n";
	iobj.Display();
	
	Queue <float>fobj;
	fobj.EnQueue(11.34f);
	fobj.EnQueue(21.7f);
	fobj.EnQueue(51.56f);
	fobj.EnQueue(101.5f);
	fobj.Display();
	float fRet = fobj.DeQueue();
	cout<<"Poped element is : "<<fRet<<"\n";
	fRet = fobj.DeQueue();
	cout<<"Poped element is : "<<fRet<<"\n";
	fobj.Display();
	
	Queue <double>dobj;
	dobj.EnQueue(11.35);
	dobj.EnQueue(21.67);
	dobj.EnQueue(51.556);
	dobj.EnQueue(101.65);
	dobj.Display();
	double dRet = dobj.DeQueue();
	cout<<"Poped element is : "<<dRet<<"\n";
	dRet = dobj.DeQueue();
	cout<<"Poped element is : "<<dRet<<"\n";
	dobj.Display();
	
	
	return 0;
}