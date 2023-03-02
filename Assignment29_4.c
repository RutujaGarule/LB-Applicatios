// Write a program which return second maximum element from singly linear linked list

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

int MaxSecond(PNODE First)
{
	int iNode = 0;
	int iMax1 = 0;
	int iMax2 = 0;
	int iCnt = 0;
	
	iNode = Count(First);
	
	iMax1 = First->data;
	for(iCnt = 1;iCnt <= iNode;iCnt++)
	{
		if(First->data > iMax1)
		{
			iMax2 = iMax1;
			iMax1 = First->data;
		}
		
		First = First->next;
	}
	
	return iMax2;
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
	int iNode = 0;
	int iRet = 0;
	
	InsertFirst(&Head,50);
	InsertFirst(&Head,6);
	InsertFirst(&Head,300);
	InsertFirst(&Head,280);
	InsertFirst(&Head,20);
	
	Display(Head);
	
	iNode = Count(Head);
	printf("Number of nodes are : %d\n",iNode);
	
	iRet = MaxSecond(Head);
	printf("Second maximum element in linked list is : %d\n",iRet);
	
	return 0;
}