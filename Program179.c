// Doubly linear linked list

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node * next;
	struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
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

void InsertLast(PPNODE First,int no)
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

void InsertAtPos(PPNODE First,int no,int ipos)
{
	PNODE newn = NULL;
	int iCnt = 0;
	int NodeCnt = 0;
	PNODE temp1 = *First;
	PNODE temp2 = NULL;
	
	NodeCnt = Count(*First);
	
	if((ipos < 1) || (ipos > NodeCnt+1))
	{
		printf("Invalid position\n");
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(First,no);
	}
	else if(ipos == NodeCnt+1)
	{
		InsertLast(First,no);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = newn;
		newn->prev = temp1;
		newn->next = temp2;
		temp2->prev = temp1->next;
	}
}

void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL)
	{
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
		(*First)->prev = NULL;
		free(temp);
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp1 = *First;
	PNODE temp2 = NULL;
	
	if(*First == NULL)
	{
		return;
	}
	else if((*First)->next == NULL)
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		while(temp1->next->next != NULL)
		{
			temp1 = temp1->next;
		}
		
		temp2 = temp1->next;
		temp1->next = NULL;
		temp2->prev = NULL;
		free(temp2);
	}
}

void DeleteAtPos(PPNODE First,int ipos)
{
	int iCnt = 0;
	int NodeCnt = 0;
	PNODE temp1 = *First;
	PNODE temp2 = NULL;
	
	NodeCnt = Count(*First);
	
	if((ipos < 1) || (ipos > NodeCnt+1))
	{
		printf("Invalid position\n");
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst(First);
	}
	else if(ipos == NodeCnt)
	{
		DeleteLast(First);
	}
	else
	{
		for(iCnt = 1;iCnt< ipos-1;iCnt++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		temp2->next->prev = temp1;
		temp2->prev = NULL;
		temp2->next = NULL;
		free(temp2);
	}
}
void Display(PNODE First)
{
	printf("Elements of linked list are : \n");
	printf("NULL<=>");
	
	while(First != NULL)
	{
		printf("| %d |<=>",First->data);
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
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes in linked list are : %d\n",iRet);
	
	InsertLast(&Head,101);
	InsertLast(&Head,111);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes in linked list are : %d\n",iRet);
	
	InsertAtPos(&Head,105,4);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes in linked list are : %d\n",iRet);
	
	DeleteAtPos(&Head,4);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes in linked list are : %d\n",iRet);
	
	DeleteFirst(&Head);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes in linked list are : %d\n",iRet);
	
	DeleteLast(&Head);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes in linked list are : %d\n",iRet);
	
	return 0;
}