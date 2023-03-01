
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First ,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn->next = *First;
		(*First)->prev = newn;
		*First = newn;
	}
}

void InsertLast(PPNODE First ,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}		
		temp->next = newn;
		newn->prev = temp;
	}
}

void DeleteFirst(PPNODE First)
{
	if(*First == NULL)
	{
		printf("Invalid position\n");
		return;
	}
	else if((*First)->next == NULL)
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		*First = (*First)->next;
		free((*First)->prev);
		(*First)->prev = NULL;
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL)
	{
		printf("Invalid position\n");
		return;
	}
	else if((*First)->next == NULL)
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void Display(PNODE First)
{
	printf("Elements of linked list are : \n");
	
	printf("NULL<=>");
	
	while(First != NULL)
	{
		printf("| %d |<=> ",First->data);
		First = First->next;
	}
	printf("NULL\n");
}

int Count(PNODE First)
{
	int iCnt = 0;
	
	while(First != NULL)
	{
		iCnt++;
		First = First->next;
	}
	return iCnt;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	
	InsertFirst(&Head,51);
	Display(Head);
	
	InsertFirst(&Head,21);
	Display(Head);
	
	InsertFirst(&Head,11);
	Display(Head);
	
	InsertLast(&Head,101);
	Display(Head);
	
	InsertLast(&Head,111);
	Display(Head);
	
	InsertLast(&Head,121);
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteFirst(&Head);
	DeleteLast(&Head);
	
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	return 0;
}