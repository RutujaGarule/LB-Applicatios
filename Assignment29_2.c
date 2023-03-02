// Write a program which displays all elements which are prime from singly linear linked list

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
typedef int BOOL;
#define TRUE 1
#define FALSE 0


void DisplayPrime(PNODE First)
{
	int iNode = 0;
	int iCnt = 0;
	int i = 0;
	BOOL Flag = FALSE;
	
	iNode = Count(First);
	
	for(iCnt = 1;iCnt <= iNode;iCnt++)
	{
		Flag = FALSE;
		for(i = 2;i <= (First->data/2)+1;i++)
		{
			if((First->data) % i == 0)
			{
				Flag = TRUE;
				break;
			}
		}
		
		if(Flag == FALSE)
		{
			printf("%d\t",First->data);
		}
		
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
	
	InsertFirst(&Head,17);
	InsertFirst(&Head,6);
	InsertFirst(&Head,11);
	InsertFirst(&Head,28);
	InsertFirst(&Head,13);
	
	Display(Head);
	
	iNode = Count(Head);
	printf("Number of nodes are : %d\n",iNode);
	
	DisplayPrime(Head);
	
	return 0;
}