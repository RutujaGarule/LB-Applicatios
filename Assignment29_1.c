// Write a program which displays all elements which are perfect from singly linear linked list

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

void DisplayPerfect(PNODE First)
{
	int iNodeCnt = 0;
	int iCnt = 0;
	int i = 0;
	int iSum = 0;
	
	iNodeCnt = Count(First);
	
	for(iCnt = 1;iCnt <= iNodeCnt;iCnt++)
	{
		iSum = 0;
		for(i = 1;i <= (First->data/2)+1;i++)
		{
			if(First->data%i == 0)
			{
				//printf("%d\t",i);
				iSum = iSum + i;
			}
		}
		//printf("%d\n",iSum);
		if(First->data == iSum)
		{
			printf("%d\t",First->data);
		}
		//printf("\n");
		First = First->next;
	}
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
	
	InsertFirst(&Head,50);
	InsertFirst(&Head,6);
	InsertFirst(&Head,30);
	InsertFirst(&Head,28);
	InsertFirst(&Head,10);
	
	Display(Head);
	
	iNode = Count(Head);
	printf("Number of nodes are : %d\n",iNode);
	
	DisplayPerfect(Head);
	
	return 0;
}