// Doubly circular linked list 

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

void InsertFirst(PPNODE First,PPNODE Last,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((*First == NULL) && (*Last == NULL))
	{
		*First = newn;
		*Last = newn;
	}
	else
	{
		newn->next = *First;
		(*First)->prev = newn;
		*First = newn;
	}
	(*First)->prev = *Last;
	(*Last)->next = *First;	
}

void InsertLast(PPNODE First,PPNODE Last,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((*First == NULL) && (*Last == NULL))
	{
		*First = *Last = newn;
		(*Last)->next = *First;
	}
	else
	{
		(*Last)->next = newn;
		newn->prev = *Last;
		*Last = newn;
	}
	(*First)->prev = *Last;
	(*Last)->next = *First;
}

void InsertAtPos(PPNODE First,PPNODE Last,int no,int ipos)
{
	int iNodeCnt = 0;
	int iCnt = 0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	iNodeCnt = Count(*First,*Last);
	
	if((ipos < 1) || (ipos > iNodeCnt+1))
	{
		printf("Invalid Position\n");
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(First,Last,no);
	}
	else if(ipos == iNodeCnt+1)
	{
		InsertLast(First,Last,no);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		temp = *First;
		
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
	}
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
	if((*First == NULL) && (*Last == NULL))
	{
		return;
	}
	else if(*First == *Last)
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else
	{
		*First = (*First)->next;
		free((*Last)->next);
		(*First)->prev = *Last;
		(*Last)->next = *First;
	}
}

void DeleteLast(PPNODE First,PPNODE Last)
{
	if((*First == NULL) && (*Last == NULL))
	{
		return;
	}
	else if(*First == *Last)
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else
	{
		*Last = (*Last)->prev;
		free((*Last)->next);
		(*First)->prev = *Last;
		(*Last)->next = *First;
	}
}

void DeleteAtPos(PPNODE First,PPNODE Last,int ipos)
{
	int iNodeCnt = 0;
	int iCnt = 0;
	PNODE temp = NULL;
	iNodeCnt = Count(*First,*Last);
	
	if((ipos < 1) || (ipos > iNodeCnt))
	{
		printf("Invalid Position\n");
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst(First,Last);
	}
	else if(ipos == iNodeCnt)
	{
		DeleteLast(First,Last);
	}
	else
	{
		temp = *First;
		
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
	}
}

void Display(PNODE First,PNODE Last)
{
	if(First == NULL && Last == NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	
	printf("Elements in linked list are : \n");
	
	do
	{
		printf("| %d | <=>",(First)->data);
		First = (First)->next;
	}while(First != (Last)->next);
	
	printf("\n");
}

int Count(PNODE First,PNODE Last)
{
	int iCnt = 0;
	
	if(First == NULL && Last == NULL)
	{
		return iCnt;
	}
	
	do
	{
		iCnt++;
		First = (First)->next;
	}while(First != (Last)->next);
	
	return iCnt;
}

int main()
{
	PNODE Head = NULL;
	PNODE Tail = NULL;
	int iRet = 0;
	
	InsertFirst(&Head,&Tail,51);
	InsertFirst(&Head,&Tail,21);
	InsertFirst(&Head,&Tail,11);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	InsertLast(&Head,&Tail,101);
	InsertLast(&Head,&Tail,111);
	InsertLast(&Head,&Tail,121);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	InsertAtPos(&Head,&Tail,105,5);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteAtPos(&Head,&Tail,5);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteFirst(&Head,&Tail);
	DeleteLast(&Head,&Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	return 0;
}