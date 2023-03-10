// generic stack

#include<iostream>
using namespace std;

template <class T>
struct node
{
	T data;
	struct node * next;
};

template <class T>
class Stack
{
	public:
		struct node<T> * First;
		int iCount;
		
		Stack();
		
		bool IsStackEmpty();
		void Push(T no);
		T Pop();
		void Display();
	
};

template <class T>
Stack<T> :: Stack()
{
	First = NULL;
	iCount = 0;
}

template <class T>
bool Stack<T> :: IsStackEmpty()
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
void Stack<T> :: Push(T no)
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
		newn->next = First;
		First = newn;
	}
	iCount++;
	
	cout<<no<<" gets pushed in stack successfully"<<"\n";
}

template <class T>
T Stack<T> :: Pop()
{
	if(First == NULL)
	{
		cout<<"Unable to pop the element as Stack is empty"<<"\n";
		return (T)-1;		//type cast
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
void Stack<T> :: Display()
{
	if(First == NULL)
	{
		cout<<"Stack is empty"<<"\n";
	}
	else
	{
		cout<<"Elements of stack are : "<<"\n";
		
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
	Stack <char>cobj;
	cobj.Push('a');
	cobj.Push('b');
	cobj.Push('c');
	cobj.Push('d');
	cobj.Display();
	char cRet = cobj.Pop();
	cout<<"Poped element is : "<<cRet<<"\n";
	cRet = cobj.Pop();
	cout<<"Poped element is : "<<cRet<<"\n";
	cobj.Display();
	
	Stack <int>iobj;
	iobj.Push(11);
	iobj.Push(21);
	iobj.Push(51);
	iobj.Push(101);
	iobj.Display();
	int iRet = iobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n";
	iRet = iobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n";
	iobj.Display();
	
	Stack <float>fobj;
	fobj.Push(11.23f);
	fobj.Push(21.56f);
	fobj.Push(51.65f);
	fobj.Push(101.62f);
	fobj.Display();
	float fRet = fobj.Pop();
	cout<<"Poped element is : "<<fRet<<"\n";
	fRet = fobj.Pop();
	cout<<"Poped element is : "<<fRet<<"\n";
	fobj.Display();
	
	Stack <double>dobj;
	dobj.Push(11.123);
	dobj.Push(21.45);
	dobj.Push(51.678);
	dobj.Push(101.56);
	dobj.Display();
	double dRet = dobj.Pop();
	cout<<"Poped element is : "<<dRet<<"\n";
	dRet = dobj.Pop();
	cout<<"Poped element is : "<<dRet<<"\n";
	dobj.Display();
	
	
	return 0;
}