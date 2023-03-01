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

void InsertFirst(PPNODE First ,PPNODE Last,int no)
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
		(*Last)->next = *First;
	}
}

void InsertLast(PPNODE First ,PPNODE Last,int no)
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
	int iNodeCnt = 0;
	iNodeCnt = Count(*First, *Last);
	PNODE newn = NULL;
	PNODE temp = *First;
	int iCnt = 0;
	
	if((ipos < 1) || (ipos > (iNodeCnt+1)))
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
		*First = (*First)->next;
		free((*Last)->next);
		(*Last)->next = *First;
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
	int iNodeCnt = 0;
	iNodeCnt = Count(*First,*Last);
	PNODE temp1 = *First;
	PNODE temp2 = NULL;
	int iCnt = 0;
	
	if((ipos < 1) || (ipos > (iNodeCnt)))
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
	printf("Elements of linked list are : \n");
	
	do
	{
		printf("| %d |->",First->data);
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
	
	InsertLast(&Head,&Tail,101);
	InsertLast(&Head,&Tail,111);
	InsertLast(&Head,&Tail,121);

	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of elements are : %d\n",iRet);
	
	InsertAtPos(&Head,&Tail,105,4);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of elements are : %d\n",iRet);
	
	DeleteAtPos(&Head,&Tail,4);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of elements are : %d\n",iRet);
	
	DeleteFirst(&Head,&Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of elements are : %d\n",iRet);
	
	DeleteLast(&Head,&Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of elements are : %d\n",iRet);
	
	
	return 0;
}