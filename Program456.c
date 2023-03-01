
#include<stdio.h>
#include<stdlib.h>

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

int main()
{
	PNODE Head = NULL;
	PNODE temp1 ,temp2;
	
	InsertFist(&Head, 121);
	InsertFist(&Head, 111);
	InsertFist(&Head, 101);
	InsertFist(&Head, 51);
	InsertFist(&Head, 21);
	InsertFist(&Head, 11);
	
	temp1 = Head;
	temp2 = Head;
	
	temp1 = temp1->next->next;
	temp2 = temp2->next->next->next->next->next;
	
	temp2->next = temp1;  		// Loop created
	
	Display(Head);
	
	
	return 0;
}