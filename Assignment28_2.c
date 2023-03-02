// Write a program which search last occurence of particular element from singly linear linked list
// Function should return position at which element is found

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

int SearchLastOcc(PNODE First,int no)
{
	int iNodeCnt = 0;
	int iCnt = 0;
	int ipos = -1;
	
	iNodeCnt = Count(First);
	
	for(iCnt = 1;iCnt <= iNodeCnt;iCnt++)
	{
		if(First->data == no)
		{
			ipos = iCnt;
		}
		First = First->next;
	}
	return ipos;
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
	int iValue = 0;
	int iNode = 0;
	
	InsertFirst(&Head,50);
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,50);
	InsertFirst(&Head,40);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	
	Display(Head);
	iNode = Count(Head);
	printf("Number of nodes are : %d\n",iNode);
	
	printf("Enter element you want to search\n");
	scanf("%d",&iValue);
	
	iRet = SearchLastOcc(Head,iValue);
	if(iRet == -1)
	{
		printf("There is no element\n");
	}
	else
	{
		printf("Element fount at position %d\n",iRet);
	}
	
	return 0;
}