
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFist(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn->next = *First;
		*First = newn;
	}
}

void Display(PNODE First)
{
	printf("Elements from the linked list are : \n");
	
	while(First != NULL)
	{
		printf("| %d |-> ",First->data);
		First = First->next;
	}
	printf("NULL \n");
}

void Reverese(PPNODE First)
{
	PNODE Previous, Next, Current;
	
	Previous = NULL;
	Next = NULL;
	Current = *First;
	
	while(Current != NULL)
	{
		Next = Current->next;
		Current->next = Previous;
		Previous = Current;
		
		Current = Next;
	}
	*First = Previous;
}

int main()
{
	PNODE Head = NULL;
	bool bRet = false;
	
	InsertFist(&Head, 101);
	InsertFist(&Head, 51);
	InsertFist(&Head, 21);
	InsertFist(&Head, 11);
	
	Display(Head);
	
	Reverese(&Head);
	
	Display(Head);
	
	
	return 0;
}