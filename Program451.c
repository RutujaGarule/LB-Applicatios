
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

int SearchLastOccurence(PNODE First,int No)
{
	int Counter = 1;
	int iPose = -1;
	
	while(First != NULL)
	{
		if(First->data == No)
		{
			iPose = Counter;
		}
		First = First->next;
		Counter++;
	}
	return iPose;
}


int main()
{
	int iRet = 0;
	PNODE Head = NULL;
	
	InsertFist(&Head, 121);
	InsertFist(&Head, 101);
	InsertFist(&Head, 111);
	InsertFist(&Head, 101);
	InsertFist(&Head, 51);
	InsertFist(&Head, 101);
	InsertFist(&Head, 21);
	InsertFist(&Head, 11);
	
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	iRet = SearchLastOccurence(Head,101);
	if(iRet == -1)
	{
		printf("There is no such element in linked list\n");
	}
	else
	{
		printf("Element is there at index : %d\n",iRet);
	}
	
	return 0;
}