// singly circular linked list

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,PPNODE Last,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if((*First == NULL) && (*Last == NULL))
	{
		*First = *Last = newn;
		(*Last)->next = *First;
	}
	else
	{
		newn->next = *First;
		*First = newn;
		(*Last)->next = newn;
	}
}

void InsertLast(PPNODE First,PPNODE Last,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if((*First == NULL) && (*Last == NULL))
	{
		*First = *Last = newn;
		(*Last)->next = *First;
	}
	else
	{
		(*Last)->next = newn;
		*Last = newn;
		(*Last)->next = *First;
	}
}

void InsertAtPos(PPNODE First,PPNODE Last,int no,int ipos)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	int iCnt = 0;
	int NodeCnt = 0;
	NodeCnt = Count(*First,*Last);
	
	if((ipos < 1) || (ipos > NodeCnt+1))
	{
		printf("Invalid Postion\n");
		return;
	}
	if(ipos == 1)
	{
		InsertFirst(First,Last,no);
	}
	else if(ipos == NodeCnt+1)
	{
		InsertLast(First,Last,no);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = no;
		newn->next = NULL;
		temp = *First;
		
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
	PNODE temp = NULL;
	
	if((*First == NULL) && (*Last == NULL))
	{
		return;
	}
	else if(*First == *Last)
	{
		free(*First);
		*First = *Last = NULL;
	}
	else
	{
		temp = *First;
		
		*First = (*First)->next;
		(*Last)->next = *First;
		free(temp);
	}
}

void DeleteLast(PPNODE First,PPNODE Last)
{
	PNODE temp = NULL;
	
	if((*First == NULL) && (*Last == NULL))
	{
		return;
	}
	else if(*First == *Last)
	{
		free(*First);
		*First = *Last = NULL;
	}
	else
	{
		temp = *First;
		
		while(temp->next->next != *First)
		{
			temp = temp->next;
		}
		free(temp->next);
		*Last = temp;
		(*Last)->next = *First;
	}
}

void DeleteAtPos(PPNODE First,PPNODE Last,int ipos)
{
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;
	int iCnt = 0;
	int NodeCnt = 0;
	NodeCnt = Count(*First,*Last);
	
	if((ipos < 1) || (ipos > NodeCnt))
	{
		printf("Invalid Postion\n");
		return;
	}
	if(ipos == 1)
	{
		DeleteFirst(First,Last);
	}
	else if(ipos == NodeCnt)
	{
		DeleteLast(First,Last);
	}
	else
	{
		temp1 = *First;
		for(iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
	}
}

void Display(PNODE First,PNODE Last)
{
	printf("Elements in linked list are : \n");
	
	do
	{
		printf("|%d|->",First->data);
		First = First->next;
	}while(First != Last->next);
	printf("\n");
}

int Count(PNODE First,PNODE Last)
{
	int iCnt = 0;
	
	do
	{
		iCnt++;
		First = First->next;
	}while(First != Last->next);
	
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
	
	DeleteFirst(&Head,&Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteLast(&Head,&Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	InsertAtPos(&Head,&Tail,105,3);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteAtPos(&Head,&Tail,3);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes are : %d\n",iRet);
	
	
	return 0;
}