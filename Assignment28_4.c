// Write a program which return largest element from singly linear linked list
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

int SearchLargest(PNODE First)
{
	int iNodeCnt = 0;
	int iCnt = 0;
	iNodeCnt = Count(First);
	int iMax = First->data;
	
	for(iCnt = 1;iCnt <= iNodeCnt;iCnt++)
	{
		if(First->data > iMax)
		{
			iMax = First->data;
		}
		First = First->next;
	}
	return iMax;
}

void InsertFirst(PPNODE First,int no)
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
	printf("Elements of linked list are : \n");
	
	while(First != NULL)
	{
		printf("| %d |->",First->data);
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
	int iNode = 0;
	
	InsertFirst(&Head,50);
	InsertFirst(&Head,400);
	InsertFirst(&Head,30);
	InsertFirst(&Head,2000);
	InsertFirst(&Head,10);
	
	Display(Head);
	iNode = Count(Head);
	printf("Number of nodes are : %d\n",iNode);
	
	iRet = SearchLargest(Head);
	printf("Largest element in linked list are : %d\n",iRet);
	
	return 0;
}